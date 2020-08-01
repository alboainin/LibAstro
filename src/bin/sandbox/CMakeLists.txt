# Add sandbox project
file(GLOB_RECURSE sandbox_hdrs "./*.h")
file(GLOB_RECURSE sandbox_srcs "./*.cpp")

include_directories(".")
include_directories("../../libastro/")

add_executable(sandbox ${sandbox_hdrs} ${sandbox_srcs})
target_link_libraries(sandbox libAstro)
