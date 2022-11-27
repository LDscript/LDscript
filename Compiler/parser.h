//
// Created by LD on 26.11.2022.
//

#ifndef LDSCRIPT_PARSER_H
#define LDSCRIPT_PARSER_H
#include <iostream>
#include <vector>

enum NodeType{
    STRING,
    NUMBER,
    IDENTIFIER,
};

class node {
public:
    node() = default;
    virtual ~node() = default;

    virtual NodeType getType() = 0;
    virtual std::string getCPP() = 0;

private:
    NodeType type;
    std::vector<node*> children;
};

class parser {
public:
    explicit parser(std::vector<std::string> input) {
        this->input = std::move(input);
    }

    void parse() {
        for (auto &item : input) {
            std::cout << item << std::endl;
        }
    }
private:
    std::vector<std::string> input;
    std::vector<node*> nodes;
};

#endif //LDSCRIPT_PARSER_H
