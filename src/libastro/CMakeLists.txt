# Add libAstro project
file(GLOB_RECURSE lib_hdrs "./*.h")
file(GLOB_RECURSE lib_srcs "./*.cpp")

include_directories(".")

add_library(libAstro ${lib_hdrs} ${lib_srcs})
