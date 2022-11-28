//
// Created by LD on 28.11.2022.
//

#ifndef LDSCRIPT_COMPILER_H
#define LDSCRIPT_COMPILER_H
#include <string>

#include <llvm/IR/LLVMContext.h>

class Compiler {
public:
    Compiler();
    ~Compiler() = default;

    void setEmitDebugInfo(bool emitDebugInfo);
    void setEmitLogInfo(bool emitLogInfo);

    void addSource(const std::string& source);

    int compile();
};


#endif //LDSCRIPT_COMPILER_H
