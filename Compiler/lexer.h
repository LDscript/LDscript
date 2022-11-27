//
// Created by LD on 26.11.2022.
//

#ifndef LDSCRIPT_LEXER_H
#define LDSCRIPT_LEXER_H

#include <utility>
#include <iostream>
#include <vector>

class lexer {
public:
    explicit lexer(std::vector<std::string> input) {
        this->input = std::move(input);
    }

    void removeComments() {
        bool isComment = false;
        for (auto &line: input) {
            // line Comment
            if (line.find("//") != std::string::npos)
                line.erase(line.find("//"));
            if (line.find("#") != std::string::npos)
                line.erase(line.find("#"));

            // Block comments not working correctly
            if (line.find("/*") != std::string::npos)
                isComment = true;
            if (line.find("*/") != std::string::npos) {
                isComment = false;
                line.erase();
            }
            if (isComment)
                line.erase();
        }
    }

    void removeEmptyLines() {
        for (auto it = input.begin(); it != input.end();) {
            if (it->empty())
                it = input.erase(it);
            else
                ++it;
        }
        input.emplace_back("");
        input.shrink_to_fit();
    }

    void generateList() {
        std::string item;
        for (auto &line: input) {
            for (int i = 0; i < line.length(); i++) {
                char& ch = line[i];

                if(std::isspace(ch) || ch == EOF || ch == '\n' || ch == '\r' || ch == '\t') {
                    if(!item.empty()){
                        stringList.push_back(item);
                        item.clear();
                    }
                } else {
                    if (std::isalpha(ch) || ch == '_') {
                        item += ch;
                    } else if (std::isdigit(ch)){
                        item += ch;
                    } else if (!item.empty() && ch == '.'){
                        item += ch;
                    } else {
                        if(!item.empty()){
                            stringList.push_back(item);
                            item.clear();
                        }

                        stringList.emplace_back(1, ch);
                        item.clear();
                    }
                }
            }
        }

        //input.clear();
    }

private:
    std::vector<std::string> input;
    std::vector<std::string> stringList;
};


#endif //LDSCRIPT_LEXER_H
