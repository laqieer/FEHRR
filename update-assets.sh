#!/usr/bin/env sh

git submodule update --remote asset/json
asset/script/make_backgrounds.py
asset/script/make_faces.py
asset/script/make_voices.py
asset/script/make_heroes.py
asset/script/make_texts.py
glyph/glyph.py