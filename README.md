# FEHRR

[![Build CI](https://github.com/laqieer/FEHRR/actions/workflows/build.yml/badge.svg)](https://github.com/laqieer/FEHRR/actions/workflows/build.yml)

Remake [FEHR](https://github.com/laqieer/FEHR) on [Fire Emblem 6 (J) (GBA)](https://ja.wikipedia.org/wiki/%E3%83%95%E3%82%A1%E3%82%A4%E3%82%A2%E3%83%BC%E3%82%A8%E3%83%A0%E3%83%96%E3%83%AC%E3%83%A0_%E5%B0%81%E5%8D%B0%E3%81%AE%E5%89%A3).

![FEHRR-0](https://github.com/user-attachments/assets/6c02fccf-1c34-44e4-8154-7eae984a41f3)
![FEHRR-1](https://github.com/user-attachments/assets/ce0cc91a-ddf9-4795-a8b3-224b09251d35)
![FEHRR-2](https://github.com/user-attachments/assets/70ff90d6-331f-486d-9629-008e33801d68)

[Sideline Story Remake](https://github.com/laqieer/FEHRG)

## User Guide

### Patch

[![GitHub Release](https://img.shields.io/github/v/release/laqieer/FEHRR)](https://github.com/laqieer/FEHRR/releases/latest)

<img src="https://raw.githubusercontent.com/oprypin/nightly.link/master/logo.svg" alt="Nightly Build" height="16" style="height: 16px; vertical-align: sub"> [Nightly Build](https://nightly.link/laqieer/FEHRR/workflows/build/main/nightly-build)

*FEBuillderGBA WorkSupport
This work supports the FEBuilderGBA work support feature, which allows for automatic updates by playing with FEBuilderGBA.
It also supports the automatic feedback function.
Feedback can be given completely anonymously, using only the information in the game.
Your feedback will help us improve the game, so please help us.
You can change this setting at any time from "FEBuilderGBA Menu->Run->Work Support".

### Patcher

[ROM Patcher JS](https://www.marcrobledo.com/RomPatcher.js/)

### Base ROM

|Info|Detail|
|---|---|
|Title|ファイアーエムブレム 封印の剣|
|Alias|Fire Emblem 6: Fuuin No Tsurugi|
|CRC32|D38763E1|
|MD5|8643FE7632D4895DCAACA230475E70FB|
|SHA-1|A57095DA867DE4D585C33D4394712986245FE6CA|

### Language

- Default → Japanese (日本語)

![FEHRR-3](https://github.com/user-attachments/assets/d3903435-7612-4770-9e4d-33d1a1f6ef8c)
![FEHRR-6](https://github.com/user-attachments/assets/f5acbcf3-61d0-4144-966f-ee55da69c1fb)

- Press A button → English

![FEHRR-4](https://github.com/user-attachments/assets/48e45791-bd84-45a6-b9be-f88592104991)
![FEHRR-7](https://github.com/user-attachments/assets/a50609a5-5855-4860-9896-ba10b5f3cbe9)

- Press A button twice (按2下A键) → Simplified Chinese (简体中文)

![FEHRR-5](https://github.com/user-attachments/assets/97a444a4-1276-41cf-948a-6250853fe799)
![FEHRR-8](https://github.com/user-attachments/assets/fdcee892-8442-417d-87ca-e26565b92705)

### Known Issues

[![GitHub issue custom search](https://img.shields.io/github/issues-search?query=repo%3Alaqieer%2FFEHRR%20is%3Aopen%20label%3Abug)](https://github.com/laqieer/FEHRR/labels/bug)

If you find any new issue:

1. Ensure to use [the latest patch](https://github.com/laqieer/FEHRR?tab=readme-ov-file#patch)

1. Check [the issue list](https://github.com/laqieer/FEHRR?tab=readme-ov-file#known-issues)

1. [Open an issue](https://github.com/laqieer/FEHRR/issues/new/choose) with detailed repro steps, screenshots and save states. **DO NOT attach ROM!!!**

## Developer Guide

### Build

1. Put base ROM file named `baserom.gba` here and run `./check_baserom.sh`

1. Install [devkitPro](https://devkitpro.org/)

1. `make`

### Logging

Supported emulators:

- [mGBA](https://mgba.io/)
- [No$GBA](https://www.nogba.com/)

### Developer Mode

- Start-up debug menu

![FEHRR-9](https://github.com/user-attachments/assets/8beea15d-c658-4388-ba44-500fb773c6b8)
![FEHRR-10](https://github.com/user-attachments/assets/4dba8e10-7ff6-4912-a187-83bdbe9e6c2b)
![FEHRR-11](https://github.com/user-attachments/assets/beebe3d1-09ed-4695-8b20-6fb61371f6ff)

- Map debug menu

![FEHRR-12](https://github.com/user-attachments/assets/ffb65f04-b89a-4cfa-b0bf-0aef241afb7a)
![FEHRR-15](https://github.com/user-attachments/assets/5fc75cfd-c13b-4eb6-be9a-dae766c9cb62)

![FEHRR-14](https://github.com/user-attachments/assets/fd1c5c44-66e8-4bcc-a6e6-642cf781cf3e)
![FEHRR-13](https://github.com/user-attachments/assets/b3b7bff6-1c35-4d1b-a425-b82b7de365fc)

![FEHRR-16](https://github.com/user-attachments/assets/c49d4530-e140-42e6-adf6-1acc8d861b1f)
![FEHRR-17](https://github.com/user-attachments/assets/2e8adc6c-2747-4441-80ff-318ef6a1a404)

## Credit

[![GitHub contributors](https://img.shields.io/github/contributors/laqieer/FEHRR)](https://github.com/laqieer/FEHRR/graphs/contributors)

### [References](.gitmodules)

### [Musics](music/appeared_musics.json)
