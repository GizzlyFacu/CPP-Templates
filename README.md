# CPP-Templates
⚡when creativity arises, these are my templates to get started quickly
---
<div align="center">
  <img src="https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExbGV3eXRqdHM5NHc4NXRlMHl2aTJ0YnIxZTcwc2xrazlsd3RoenNoeiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/wLa0m8uCyEZGhNS6dT/giphy.gif" style="height: 100px; width: auto;" />
<a href="https://youtu.be/HbNIKR2pctU?si=xXPPTDW2_y6AFMEB&t=88">
 <img src="https://media1.tenor.com/m/N1Hgl4qMR30AAAAd/mxstery.gif" style="height: 200px; width: auto;" />
</a>
  <img src="https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExbGV3eXRqdHM5NHc4NXRlMHl2aTJ0YnIxZTcwc2xrazlsd3RoenNoeiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/wLa0m8uCyEZGhNS6dT/giphy.gif" style="height: 100px; width: auto;" />
</div>

## 🧞‍♂️ Details:
- System Build: Meson ♥️ [Get Meson](https://mesonbuild.com/Getting-meson.html#installing-meson-and-ninja-with-the-msi-installer)
- Package Manager: Conan ♥️ [Get Conan](https://docs.conan.io/2/installation.html#install-with-pip-recommended)
  - Method: pkg-config. (Install guide and why pkg config below)
- Principal Toolchain: MingGW  (gcc.exe / g++.exe)
- C++ version: >C++17

## 📍 How to use:
- I don't know /s
- Just -Read- the README of the template you are interested in.

## 🧞‍♂️ Extra Guides:
### ⚙️ Install pkg-config
Why install this instead of just using CMake as a method for install dependencies?:
  - Meson has problems with the last versions of "method: CMake", unsupported advanced functions that can't be recognized from CMake.

 Guide:
This is a step-by-step procedure to get pkg-config working on Windows, based on my experience.
I assume here that MinGW was installed to C:\MinGW. There were multiple versions of the packages available, and in each case I just downloaded the latest version.

1. go to http://ftp.gnome.org/pub/gnome/binaries/win32/dependencies/
2. download the file pkg-config_0.26-1_win32.zip
3. extract the file bin/pkg-config.exe to C:\MinGW\bin
4. download the file gettext-runtime_0.18.1.1-2_win32.zip
5. extract the file bin/intl.dll to C:\MinGW\bin
6. go to http://ftp.gnome.org/pub/gnome/binaries/win32/glib/2.28
7. download the file glib_2.28.8-1_win32.zip
8. extract the file bin/libglib-2.0-0.dll to C:\MinGW\bin
9. config the PATH of pkg-config.exe in system PATH.
Now CMake / Conan will be able to use pkg-config if it is configured to use MinGW.
