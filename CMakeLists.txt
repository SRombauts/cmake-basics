cmake_minimum_required (VERSION 2.6)
project (Tutorial)

# add the subdirectory containing the CMakeLists.txt for the library
add_subdirectory (MathFunctions) 
include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
 
# add the executable
add_executable (Tutorial Main/tutorial.cxx)
target_link_libraries (Tutorial MathFunctions)

# add a "test" target:
enable_testing()

# does the application run
add_test (TutorialRuns Tutorial 25)
 
# does it sqrt of 25
add_test (TutorialComp25 Tutorial 25)
 
set_tests_properties (TutorialComp25 
  PROPERTIES PASS_REGULAR_EXPRESSION "25 is 5")
 

