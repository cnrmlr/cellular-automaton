@echo off
REM Set the directory where CMake will place the build files
set BUILD_DIR=build

REM Create the build directory if it doesn't exist
if not exist %BUILD_DIR% (
    mkdir %BUILD_DIR%
)

REM Change to the build directory
cd %BUILD_DIR%

REM Run CMake to generate Visual Studio 2022 solution
cmake -G "Visual Studio 17 2022" -A x64 ..

REM Return to the original directory
cd ..
echo Solution generated in %BUILD_DIR% folder.
