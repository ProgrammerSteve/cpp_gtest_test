### Setting up vcpkg locally
- git clone https://github.com/microsoft/vcpkg.git
- cd vcpkg
- ./bootstrap-vcpkg.sh
- ./vcpkg integrate install
- ./vcpkg install gtest
- F1 CMake Configure

### Creating Executables
- cmake -S . -B build
- cmake --build build