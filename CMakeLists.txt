cmake_minimum_required(VERSION 3.23)
project(LDscript)

set(CMAKE_CXX_STANDARD 20)
set(LLVM_LINK_COMPONENTS
        Analysis
        Core
        Support
        )

include_directories(./src)
include_directories(./src/generated)
include_directories(./vendor/antlr4-runtime/runtime/src)
include_directories("C:/Program Files/LLVM/include")

add_subdirectory(./vendor/antlr4-runtime/)

link_directories("C:/Program Files/LLVM/lib")
add_executable(LDscript src/main.cpp
        src/generated/LdScriptLexer.cpp
        src/generated/LdScriptParser.cpp
        src/lds/Compiler.cpp
        src/lds/Compiler.h)

target_link_libraries(LDscript antlr4_static)