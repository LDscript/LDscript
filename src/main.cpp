//
// Created by LD on 26.11.2022.
//

#include <iostream>
#include <fstream>
#include <vector>

#include <cxxopts.hpp>

#include "./lds/Compiler.h"

int main(int argc, char** argv) {
    cxxopts::Options options("lds", "A LDScript compiler");

    options.add_options()
            ("f,files", "Input files", cxxopts::value<std::vector<std::string>>())
            ("o,output", "Output file", cxxopts::value<std::string>()->default_value("./out.exe"))
            ("d,debug", "Generate debug info", cxxopts::value<bool>()->default_value("false"))
            ("l,log", "Generate log information", cxxopts::value<bool>()->default_value("false"))
            ("h,help", "Print help")
            ;

    options.parse_positional({"files"});
    options.custom_help("<files> [options]");
    options.positional_help("");
    options.show_positional_help();

    auto result = options.parse(argc, argv);

    if (result.count("help"))
    {
        std::cout << options.help() << std::endl;
        exit(0);
    }

//    std::cout << "Input file: " << result["file"].as<std::string>() << std::endl;
//    std::cout << "Output file: " << result["output"].as<std::string>() << std::endl;
//    std::cout << "Debug: " << result["debug"].as<bool>() << std::endl;
//    std::cout << "Log: " << result["log"].as<bool>() << std::endl;

    Compiler lds;

    lds.setEmitDebugInfo(result["debug"].as<bool>());
    lds.setEmitLogInfo(result["log"].as<bool>());

    for (auto& file : result["files"].as<std::vector<std::string>>())
        lds.addSource(file);

    int exitCode = lds.compile();
    return exitCode;
}
