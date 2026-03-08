Warning, game now indev
# JumpEngine - Engine of NeoJumper game

## Description
Jump engine - is engine of NeoJumper game. This engine can work with GFX, AUDIO, CONFIGURE, IO systems. Documentation of JumpEngine you can find in DOCUMENTATION.md file.

## Authors
Mykyta Polishyk - main developer of engine


## Thanks for
- GLFW - Nice GL lib for C++
- LIBPNG and ZLIB - For png loading
- GLM - For graphics mathematics
- GLAD - For GL 3.3
- SimpleIni - For configs
- Freetype - Fonts render

## Building
To build JumpEngine you have to install:
* C++ compiler (Like on Unix systems g++, or on Windows systems mingw32)
* GLFW library
* Assimp library
* Libpng library (also with zlib)
* Freetype library
* Cmake building system

After installing this tools and libs you must to open terminal (Or in windows CMD), and write this:
```
git clone https://github.com/zabidenhtf/JumpEngine.git
cd JumpEngine
mkdir build
cd build
cmake ..
make
```

## Follow development
More news about NeoJumper you can find in my development blog here: https://neojumper.blogspot.com/ .

Also you can find NeoJumper repository here: https://github.com/zabidenhtf/neojumper

-------------
Milestone 0

Copyright (C) 2025-2026 Mykyta Polishyk

This project is licensed under the GNU General Public License v3.0 or later.
See the LICENSE file for details.
