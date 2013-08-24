Code from the CMakeTutorial (http://www.cmake.org/cmake/help/cmake_tutorial.html)

Used to test the Travis CI (https://travis-ci.org/) Continuous Integration community service.

## Building & testing

### Debug build
mkdir Debug
cd Debug
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
make
make test

### Release build
mkdir Release
cd Release
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
make
make test


