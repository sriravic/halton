project(halton)

set(SRCS halton_enum.h halton_sampler.h main.cpp)

add_executable(halton ${SRCS})