cmake_minimum_required (VERSION 2.6)
project (Tutorial)

# add the subdirectory containing the CMakeLists.txt for the library
add_subdirectory (MathFunctions) 
 
# add the executable
add_executable (Tutorial tutorial.cxx)
target_link_libraries (Tutorial MathFunctions)

