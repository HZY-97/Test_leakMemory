cmake_minimum_required(VERSION 3.8)
project(leakMem VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)


#---------for msg---------
aux_source_directory(. SOURCES)

add_executable(leakMem ${SOURCES})

target_link_options(leakMem PRIVATE -fsanitize=leak)
target_compile_options(leakMem PRIVATE -O0 -g -fsanitize=leak)