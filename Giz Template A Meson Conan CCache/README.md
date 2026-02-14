# Giz Template "A"
<div align="center">
  <img src="https://static.wixstatic.com/media/abf944_52a07dc3bb7547bdb7a39f4808a754e0~mv2.gif" style="height: 100px; width: auto;" />
<a href="https://youtu.be/hSMHtM4iM8I?si=dj8lQ5UeQI8fBkcf">
 <img src="https://media.tenor.com/WKJDlYe0u1QAAAAi/ppp.gif" style="height: 200px; width: auto;" />
</a>
  <img src="https://static.wixstatic.com/media/abf944_52a07dc3bb7547bdb7a39f4808a754e0~mv2.gif" style="height: 100px; width: auto;" />
</div>

---

My **FAST** and **PRODUCTIVE** all-project startup for C++17. Rise my creation!

## Requirements:

- MinGW (gcc / g++) [Download link + steps](https://www.msys2.org/)
	- Check the steps in the same download msys2 page.
 	- Add C:\\msys64\\mingw64\\bin to the [System PATH](https://youtu.be/pGRw1bgb1gU?si=HhE\_k-wTZso74HdD).	
	- Verify: Open Windows Powershell and paste inside "g++ --version", if something happens, it's correctly installed.
	- **IMPORTANT:** you can use MVSC with Meson if u have already installed Visual Studio (change the conan-profile). But I use MinGW for better portability.

- Meson: [Get Meson](https://mesonbuild.com/Getting-meson.html#installing-meson-and-ninja-with-the-msi-installer)
	- You will need [Python](https://www.python.org/downloads/)

- Conan: [Get Conan](https://docs.conan.io/2/installation.html)
	- You will need [Python](https://www.python.org/downloads/)

- Pkg-config: read the "Extra Guides" of the principal README.md at the root of this repository [Get Pkg-Config](https://github.com/GizzlyFacu/CPP-Templates?tab=readme-ov-file#%EF%B8%8F-install-pkg-config)
## How to Use:

- click "setup.bat"
- buy 200 kg of Mercury powder + 1 goblin gear + 2 flechipollas.

---
## FAQ
#### LIBRARIES: What if I want to use another library like SFML?
- in the conanfile.txt put this:
```pyhon
[requires]
sfml/3.0.2
```
How do I know which versions of the library are available?
- open the cmd / powershell and type the comman below; change 'sfml' with the library you are interested in, must show you a list.

``conan search sfml``

#### TOOLS: What if I want to use another tool like CMake?
[Detailed Tutorial](https://docs.conan.io/2/tutorial/consuming_packages/use_tools_as_conan_packages.html)
- in the conanfile.txt put this
```pyhon
[tool_requires]
cmake/3.27.9
```
- next you need to add a line in the setup.bat after "conan . install". IN THIS TEMPLATE is already placed so u don't need to.
``call %CONAN_BUILD_DIR%/conanbuild.bat``
- last [configure cmake in meson.build](https://mesonbuild.com/CMake-module.html)
## Details:

- Edit the meson.build if you want different names (app.exe, subfolders, etc.)
	- [Meson Tutorial](https://mesonbuild.com/Tutorial.html)
