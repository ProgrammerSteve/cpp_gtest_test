add_library(math_utilities STATIC src/math_utilities.cpp)

# Properly set the include directory for public access
target_include_directories(math_utilities PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)