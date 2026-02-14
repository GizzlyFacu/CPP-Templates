# Basic Template with Conan and Meson
<div align="center">
  <img src="https://media.tenor.com/I5aq34ObejoAAAAj/capcut-capcut-effect.gif" style="height: 100px; width: auto;" />
<a href="https://youtu.be/hSMHtM4iM8I?si=dj8lQ5UeQI8fBkcf">
 <img src="https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExc3gyM2xtM3JvMDczdGNhbXU2djhzbHg3czMwZ3Zrc2hnbGVpejR5OCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/XnBybQCSMFNDXUtRnV/giphy.gif" style="height: 200px; width: auto;" />
</a>
  <img src="https://media.tenor.com/I5aq34ObejoAAAAj/capcut-capcut-effect.gif" style="height: 100px; width: auto;" />
</div>

---

My all-project startup for C++17

## Requirements:

- MinGW (gcc / g++) [Download link + steps](https://www.msys2.org/)
	- Check the steps in the same download msys2 page.
 	- Add C:\\msys64\\mingw64\\bin to the [System PATH](https://youtu.be/pGRw1bgb1gU?si=HhE\_k-wTZso74HdD).	
	- Verify: Open Windows Powershell and paste inside "g++ --version", if something happens, it's correctly installed.
	- **IMPORTANT:** you can use MVSC with Meson if u have already installed Visual Studio. But I use MinGW for better portability.

- Meson: [Get Meson](https://mesonbuild.com/Getting-meson.html#installing-meson-and-ninja-with-the-msi-installer)
	- You will need [Python](https://www.python.org/downloads/)

- Conan: [Get Conan](https://docs.conan.io/2/installation.html)
	- You will need [Python](https://www.python.org/downloads/)

- Pkg-config: read the "Extra Guides" of the principal README.md at the root of this repository [Get Pkg-Config](https://github.com/GizzlyFacu/CPP-Templates?tab=readme-ov-file#%EF%B8%8F-install-pkg-config)
## How to Use:

- click "setup.bat"
- buy 200 kg of Mercury powder + 1 goblin gear + 2 flechipollas.

## Details:

- Edit the meson.build if you want different names (app.exe, subfolders, etc.)
	- [Meson Tutorial](https://mesonbuild.com/Tutorial.html)
