cmake_minimum_required(VERSION 3.23)
project(LDscript)

set(LLVM_PATH ./vendor/lib/llvm-project)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set(CMAKE_CXX_STANDARD 20)
set(LLVM_LINK_COMPONENTS
        Analysis
        Core
        Support
        )

include_directories(./src)
include_directories(./src/generated)
include_directories(./vendor/lib/antlr4-runtime/runtime/src)
include_directories(./vendor/lib/cxxopts-3/include)
include_directories(./vendor/lib/llvm-project/llvm/include)
include_directories(${LLVM_PATH}/include)

add_subdirectory(./vendor/lib/antlr4-runtime/)
add_subdirectory(./vendor/lib/cxxopts-3/)
#add_subdirectory(./vendor/lib/llvm-project/llvm)

#link_directories(./vendor/lib/llvm-project/llvm/lib)
link_directories(${LLVM_PATH}/lib)

add_executable(LDscript src/main.cpp
        src/generated/LdScriptLexer.cpp
        src/generated/LdScriptParser.cpp
        src/lds/Compiler.cpp
        src/lds/Compiler.h)

target_link_libraries(LDscript antlr4_static cxxopts -fno-rtti -static-libgcc -static-libstdc++
        LLVMX86AsmParser # MC, MCParser, Support, X86Desc, X86Info
        LLVMX86Desc # MC, Support, X86AsmPrinter, X86Info
        LLVMX86AsmPrinter # MC, Support, X86Utils
        LLVMX86Info # MC, Support, Target
        LLVMX86Utils # Core, Support
        LLVMipo
        LLVMScalarOpts
        LLVMInstCombine
        LLVMTransformUtils
        LLVMipa
        LLVMAnalysis
        LLVMTarget
        LLVMOption # Support
        LLVMMCParser # MC, Support
        LLVMMC # Object, Support
        LLVMObject # BitReader, Core, Support
        LLVMBitReader # Core, Support
        LLVMCore # Support
        LLVMSupport)