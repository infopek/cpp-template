# C++ Core-App Template
Welcome to the C++ Core-App Template! This template provides a structured starting point for developing C++ applications using a multi-project architecture, commonly known as the core-app style. It uses vcpkg as its package manager, this makes it easy to add dependencies later. If you want to add a dependency, open a `cmd` or `bash` in the project source directory, and type `vcpkg add port <dependency>`. Note that you may also need to change the `CMakeLists.txt` in the project root to find the necessary packages, and link to the libraries in the specific projects' `CMakeLists.txt`.
## Features
- Modular Design: Organize your codebase into separate projects/modules for better maintainability and scalability.
- CMake Configuration: Utilizes CMake for cross-platform build configuration, allowing easy compilation on various operating systems.
- Flexible Architecture: Easily add new modules or extend existing ones to suit your project's requirements.
- Unit Testing: Includes a sample unit testing setup using Google Test framework, ensuring code reliability and robustness.
## Prerequisites
- CMake (Version >= 3.16)
- C++ Compiler supporting C++11 standard or later
### Installing CMake
If you don't have CMake installed on your machine, follow these steps to install it:
#### Windows
1. Visit the [CMake download page](https://cmake.org/download/) and download the latest version of CMake for Windows.
2. Run the downloaded installer and follow the installation instructions.
3. Once installed, you can verify the installation by opening a command prompt and typing `cmake --version`.
#### Linux
1. Coming soon!
## Getting Started
1. Clone this repository to your local machine:
```bash
git clone --recursive https://github.com/infopek/cpp-template.git
```
2. Navigate to the cloned directory:
```bash
cd ./cpp-template/
```
3. Generate build files:
```bash
cmake --preset=x64-<debug/release>
```
4. Build the project:
### Debug
```bash
cd ./build-x64-debug/
cmake --build .
```
### Release
```bash
cd ./build-x64-release/
cmake --build . --config Release
```
5. Run unit tests:
```bash
# In the project root directory
ctest --preset=windows-default
```
## Contributing
Contributions are welcome! If you have suggestions for improvements, please open an issue or create a pull request.
## License
This project is licensed under the MIT License - see the LICENSE file for details.
