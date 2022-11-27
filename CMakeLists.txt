project(LDscript)

set(CMAKE_CXX_STANDARD 20)

add_executable(LDscript Compiler/main.cpp Compiler/lexer.h Compiler/parser.h)