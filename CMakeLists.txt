cmake_minimum_required(VERSION 3.5)

project("Astro" CXX)

# Set output directories.
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Check if compiler name.
message(${CMAKE_CXX_COMPILER_ID})

# Set build type definitions.
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-D__DEBUG__)
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")
if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-D__RELEASE__)
endif (CMAKE_BUILD_TYPE STREQUAL "Release")

# Add libAstro project
add_subdirectory("src/libastro/")

# Add sandbox project
add_subdirectory("src/sandbox/")

