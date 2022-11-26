//
// Created by LD on 26.11.2022.
//

#include <iostream>
#include <fstream>
#include <vector>

#include "lexer.h"

std::string ouput = "./output/out.cpp";
std::string input = "../TestSrc/example.lds";

int main(int argc, char** argv) {
    std::ifstream file(input);
    std::vector<std::string> code;

    std::string line;
    while (std::getline(file, line))
        code.push_back(line);

    lexer lex(code);
    lex.removeComments();
    lex.removeEmptyLines();

    lex.generateList();

    return 0;
}