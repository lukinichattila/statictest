@echo on

@set PATH=C:\MinGW\bin\
@set PATH=%PATH%;C:\Program Files\CMake\bin\

@echo PATH=%PATH%

@set PROJECT_NAME=Static test
@set PROJECT_VERSION=1.0.0
@set PRJ_DIR=%~dp0
@set SRC_DIR=%PRJ_DIR%
@set BIN_DIR=%PRJ_DIR%\build
@set INSTALL_DIR=%PRJ_DIR%\install
@set CC=g++.exe
@set CXX=g++.exe
@set C_STANDARD_REQUIRED=ON
@set C_STANDARD=99
@set CXX_STANDARD_REQUIRED=ON
@set CXX_STANDARD=11
@rem set PLTFRM="NMake Makefiles" 
@rem set PLTFRM="Visual Studio 15 2017 Win64"
@set PLTFRM="MinGW Makefiles"

if exist %BIN_DIR% (
  rd /S /Q %BIN_DIR%
 ) else (
  mkdir %BIN_DIR%
 )

 if exist %INSTALL_DIR% (
  rd /S /Q %INSTALL_DIR%
 ) else (
  mkdir %INSTALL_DIR%
 )

cmake  -Wno-dev^
 -D CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=ON^
 -S %SRC_DIR%^
 -B %BIN_DIR%^
 -G %PLTFRM%
