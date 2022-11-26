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
    explicit lexer(std::vector<std::string> input){
        this->input = std::move(input);
    }

    void removeComments(){
        bool isComment = false;
        for (auto& line : input){
            // line Comment
            if (line.find("//") != std::string::npos)
                line.erase(line.find("//"));
            if (line.find("#") != std::string::npos)
                line.erase(line.find("#"));

            // Block comments
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

    void removeEmptyLines(){
        for (auto it=input.begin(); it!=input.end();)
        {
            if(it->empty())
                it = input.erase(it);
            else
                ++it;
        }
    }

    void generateList(){
        for (auto& line : input){
            std::string item;
            for (auto& ch : line){
                if(!std::isalpha(ch)){
                    if (!item.empty()) {
                        stringList.push_back(item);
                        item = "";
                    }

                    if(!std::isspace(ch)){
                        stringList.emplace_back(1,ch);
                    }

                    continue;
                }

                item += ch;
            }
        }
    }

private:
    std::vector<std::string> input;
    std::vector<std::string> stringList;
};


#endif //LDSCRIPT_LEXER_H
