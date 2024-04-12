# C++ Core-App Template
Welcome to the C++ Core-App Template! This template provides a structured starting point for developing C++ applications using a multi-project architecture, commonly known as the core-app style. It uses vcpkg as its package manager, this makes it easy to add dependencies later. If you want to add a dependency, open a `cmd` or `bash` in the project source directory, and type `vcpkg add port <dependency>`. For more details, you can check out [Microsoft's guide](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-cmd) on integrating vcpkg.
## Features
- Modular Design: Organize your codebase into separate projects/modules for better maintainability and scalability.
- CMake Configuration: Utilizes CMake for cross-platform build configuration, allowing easy compilation on various operating systems.
- Flexible Architecture: Easily add new modules or extend existing ones to suit your project's requirements.
- Unit Testing: Includes a sample unit testing setup using Google Test framework, ensuring code reliability and robustness.
## Prerequisites
- CMake (Version >= 3.14)
- C++ Compiler supporting C++11 standard or later
## Getting Started
1. Clone this repository to your local machine:
```bash
git clone https://github.com/infopek/cpp-template.git
```
2. Navigate to the cloned directory:
```bash
cd ./cpp-template/
```
2. Make sure you have Vcpkg installed. If not, you can follow the instructions on the [vcpkg GitHub](https://github.com/microsoft/vcpkg) page for installation.
3. Generate build files:
```bash
cmake --preset=default
```
**Note**: If you don't have the `VCPKG_ROOT` environment variable set, make sure to set it to the root directory of your vcpkg installation. For example:
```bash
export VCPKG_ROOT=/path/to/your/vcpkg.cmake
```
4. Build the project:
```bash
cd ./build/
cmake --build .
```
## Contributing
Contributions are welcome! If you have suggestions for improvements, please open an issue or create a pull request.
## License
This project is licensed under the MIT License - see the LICENSE file for details.
