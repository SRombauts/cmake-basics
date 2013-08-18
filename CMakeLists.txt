cmake_minimum_required (VERSION 2.6)
project (Tutorial)

add_library (MathFunctions MathFunctions/mysqrt.cxx) 
 
# add the executable
add_executable (Tutorial tutorial.cxx)
target_link_libraries (Tutorial MathFunctions)

