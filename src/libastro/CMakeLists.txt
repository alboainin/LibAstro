# Add libAstro project
file(GLOB_RECURSE lib_hdrs "./*.h")
file(GLOB_RECURSE lib_srcs "./*.cpp")

include_directories(".")

add_library(Astro ${lib_hdrs} ${lib_srcs})


set_property(TARGET Astro PROPERTY RULE_LAUNCH_COMPILE "${CMAKE_COMMAND} -E time")
