#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------

ifeq ($(strip $(DEVKITPRO)),)
$(error "Please set DEVKITPRO in your environment. export DEVKITPRO=<path to>devkitPro")
endif

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

GBALZSS ?= $(DEVKITPRO)/tools/bin/gbalzss

include $(DEVKITARM)/gba_rules

#---------------------------------------------------------------------------------
# TARGET is the name of the output
# BUILD is the directory where object files & intermediate files will be placed
# SOURCES is a list of directories containing source code
# INCLUDES is a list of directories containing extra header files
# DATA is a list of directories containing binary data
# RAW_DATA is a list of directories containing uncompressed binary data to be compressed
# GRAPHICS is a list of directories containing files to be processed by grit
# SOUNDS is a list of directories containing files to be processed by se2m4a
# BGMS is a list of directories containing files to be processed by midi2agb
#
# All directories are specified relative to the project directory where
# the makefile is found
#
#---------------------------------------------------------------------------------
TARGET		:= $(notdir $(CURDIR))
BUILD		:= build
SOURCES		:= source source/gba-hq-mixer source/music
INCLUDES	:= include include/decomp/include
DATA		:= data/map
RAW_DATA	:= data/terrain
MUSIC		:=
LDSCRIPTS	:= ldscript
GRAPHICS	:= gfx/face gfx/glyph/EN gfx/glyph/JA gfx/glyph/ZH gfx/background gfx/misc gfx/map
SOUNDS		:= sfx/voice
BGMS		:= music/midi music/trans/best_matches

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------
ARCH	:=	-mthumb -mthumb-interwork

CFLAGS	:=	-g -Wall -O2\
		-mcpu=arm7tdmi -mtune=arm7tdmi\
		$(ARCH)

CFLAGS	+=	$(INCLUDE)

CFLAGS	+=	-ffunction-sections -fdata-sections -fno-reorder-functions -fno-inline -fomit-frame-pointer -ffast-math -mlong-calls

GIT_VERSION := "$(shell git describe --abbrev=7 --dirty --always --tags)"
CFLAGS += -DGIT_VERSION=\"$(GIT_VERSION)\"

CXXFLAGS	:=	$(CFLAGS) -fno-rtti -fno-exceptions

ASFLAGS	:=	-g $(ARCH)

ASFLAGS	+=	$(INCLUDE)

LDFLAGS	=	-g $(ARCH) -Wl,-Map,$(OUTPUT).map

LDFLAGS	+=	-nostartfiles

## Create a gfx library variable
GFXLIBS     ?= $(foreach dir,$(GRAPHICS),lib$(subst /,_,$(dir)).a)

## Create a sfx library variable
SFXLIBS     ?= $(foreach dir,$(SOUNDS),lib$(subst /,_,$(dir)).a)

## Create a bgm library variable
BGMLIBS     ?= $(foreach dir,$(BGMS),lib$(subst /,_,$(dir)).a)

#---------------------------------------------------------------------------------
# any extra libraries we wish to link with the project
#---------------------------------------------------------------------------------
LIBS	:= -lmm -lgba \
	$(foreach dir,$(GRAPHICS),-l$(subst /,_,$(dir))) \
	$(foreach dir,$(SOUNDS),-l$(subst /,_,$(dir))) \
	$(foreach dir,$(BGMS),-l$(subst /,_,$(dir)))


#---------------------------------------------------------------------------------
# list of directories containing libraries, this must be the top level containing
# include and lib
#---------------------------------------------------------------------------------
LIBDIRS	:=	$(LIBGBA)

#---------------------------------------------------------------------------------
# no real need to edit anything past this point unless you need to add additional
# rules for different file extensions
#---------------------------------------------------------------------------------


ifneq ($(BUILD),$(notdir $(CURDIR)))
#---------------------------------------------------------------------------------

export OUTPUT	:=	$(CURDIR)/$(TARGET)

export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
			$(foreach dir,$(DATA),$(CURDIR)/$(dir)) \
			$(foreach dir,$(RAW_DATA),$(CURDIR)/$(dir)) \
			$(foreach dir,$(GRAPHICS),$(CURDIR)/$(dir)) \
			$(foreach dir,$(SOUNDS),$(CURDIR)/$(dir)) \
			$(foreach dir,$(BGMS),$(CURDIR)/$(dir))

export DEPSDIR	:=	$(CURDIR)/$(BUILD)

CFILES			:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
SFILES			:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
RAWFILES		:=	$(foreach dir,$(RAW_DATA),$(notdir $(wildcard $(dir)/*.*)))
BINFILES		:=	$(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.*))) $(RAWFILES:.raw=.bin)

ifneq ($(strip $(MUSIC)),)
	export AUDIOFILES	:=	$(foreach dir,$(notdir $(wildcard $(MUSIC)/*.*)),$(CURDIR)/$(MUSIC)/$(dir))
	BINFILES += soundbank.bin
endif

#---------------------------------------------------------------------------------
# use CXX for linking C++ projects, CC for standard C
#---------------------------------------------------------------------------------
ifeq ($(strip $(CPPFILES)),)
#---------------------------------------------------------------------------------
	export LD	:=	$(CC)
#---------------------------------------------------------------------------------
else
#---------------------------------------------------------------------------------
	export LD	:=	$(CXX)
#---------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------

export OFILES_BIN := $(addsuffix .o,$(BINFILES))

export OFILES_SOURCES := $(CPPFILES:.cpp=.o) $(CFILES:.c=.o) $(SFILES:.s=.o)

export OFILES := $(OFILES_BIN) $(OFILES_SOURCES)

export HFILES := $(addsuffix .h,$(subst .,_,$(BINFILES)))

export INCLUDE	:=	$(foreach dir,$(INCLUDES),-I$(CURDIR)/$(dir)) \
					$(foreach dir,$(LIBDIRS),-I$(dir)/include) \
					-I$(CURDIR)/$(BUILD)

export LIBPATHS	:=	$(foreach dir,$(LIBDIRS),-L$(dir)/lib) -L$(DEPSDIR)

export LDSFILES	:=	$(foreach file,$(foreach dir,$(LDSCRIPTS),$(wildcard $(dir)/*.lds)),../$(file)) \
					$(OUTPUT).lds ../$(LDSCRIPTS)/decomp/output/fe6.lds

.PHONY: $(BUILD) clean .FORCE

#---------------------------------------------------------------------------------
$(BUILD):
	@[ -d $@ ] || mkdir -p $@
	@for dir in $(GRAPHICS); do \
		GFXDIR=$$dir $(MAKE) --no-print-directory -f $(CURDIR)/gfxmake; \
	done
	@for dir in $(SOUNDS); do \
		SFXDIR=$$dir $(MAKE) --no-print-directory -f $(CURDIR)/sfxmake; \
	done
	@for dir in $(BGMS); do \
		BGMDIR=$$dir $(MAKE) --no-print-directory -f $(CURDIR)/bgmmake; \
	done
	@$(MAKE) --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile

#---------------------------------------------------------------------------------
clean:
	@echo clean ...
	@rm -fr $(BUILD) $(TARGET).elf $(TARGET).gba


#---------------------------------------------------------------------------------
else

#---------------------------------------------------------------------------------
# main targets
#---------------------------------------------------------------------------------

$(OUTPUT).gba	:	$(OUTPUT).elf

$(OUTPUT).elf	:	$(OFILES) $(LDSFILES) $(GFXLIBS)
	$(SILENTCMD)$(LD)  $(LDFLAGS) $(OFILES) $(LIBPATHS) $(LIBS) -o $@ -T $(OUTPUT).lds
	$(SILENTCMD)$(OBJCOPY) --set-section-flags .baserom="r,c,a" $@

$(OFILES_SOURCES) : $(HFILES)

# Rebuild it each time to update build info
main.o	:	.FORCE
.FORCE	:

#---------------------------------------------------------------------------------
# The bin2o rule should be copied and modified
# for each extension used in the data directories
#---------------------------------------------------------------------------------

#---------------------------------------------------------------------------------
# rule to build soundbank from music files
#---------------------------------------------------------------------------------
soundbank.bin soundbank.h : $(AUDIOFILES)
#---------------------------------------------------------------------------------
	@mmutil $^ -osoundbank.bin -hsoundbank.h

#---------------------------------------------------------------------------------
# This rule links in binary data with the .bin extension
#---------------------------------------------------------------------------------
%.bin.o	%_bin.h :	%.bin
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

#---------------------------------------------------------------------------------
# This rule compresses binary data with the .raw extension using lz77
#---------------------------------------------------------------------------------
%.bin :	%.raw
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(GBALZSS) e $< $@


-include $(DEPSDIR)/*.d
#---------------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------------
