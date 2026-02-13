@echo off

set MESON_BUILD_DIR=meson-build

if not exist %MESON_BUILD_DIR% (
    echo Creating meson build directory...
    meson setup %MESON_BUILD_DIR%
) else (
    echo Reconfiguring project...
    meson setup %MESON_BUILD_DIR% --reconfigure
)

echo Compiling...
meson compile -C %MESON_BUILD_DIR%/

if %ERRORLEVEL% neq 0 (
    echo Meson Build failed.
    exit /b %ERRORLEVEL%
)

echo Build successful.
pause