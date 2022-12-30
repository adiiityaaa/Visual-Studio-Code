# Installing Visual Studio Code:
1. Go to [Visual Studio Code](https://code.visualstudio.com/download) download website.
2. Download the version suitable for your Machine. 
3. Once downloaded, run the installer with suitable settings.
4. Install [Visual Studio Installer](https://visualstudio.microsoft.com/downloads/) to download additional workloads. (Optional)
5. Navigate to marketplace using [Ctrl+Shift+X] and install the required extensions. (Optional)

# Installing Python:
1. Go to official [Python](https://www.python.org/) website.
2. Download the compatible version for your PC.
3. Install with suitable settings.

# Installing NodeJS:
1. Go to official [NodeJS](https://nodejs.org/en/) download website.
2. Download the compatible version for your PC.
3. Install with suitable settings.

# Installing C++:
You don't really need to install C++. You need to install a Compiler to run the codes.
1. Download the MINGW64 C/C++ tools via [MSYS2](https://www.msys2.org/) website.
2. Install MINGW64 by following the steps on their [installation guide](https://www.msys2.org/).
3. If using Visual Studio Code, install the C/C++ extension from marketplace.
4. Install Mingw-64 toolchain by running `pacman -S --needed base-devel mingw-w64-x86_64-toolchain` in your terminal.
5. Add the path of MINGW64 bin to your Windows Path in environment settings.
6. Check for proper installation using: ```gcc --version
g++ --version
gdb --version
If fails, restart from step 2.```
7. Refer to [Visual Studio Documentation](https://code.visualstudio.com/docs/cpp/config-mingw) or [MSYS2 Documentation](https://www.msys2.org/) if any error persists.