@echo on

@set PATH=C:/Program Files/CMake/bin/

@echo %PATH%
set PRJ_DIR=%~dp0
set BLD_DIR=%PRJ_DIR%/build

cd %BLD_DIR%
cmake --build %BLD_DIR% 
cd %PRJ_DIR%

