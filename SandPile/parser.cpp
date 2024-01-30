#pragma once
#include <cstring>
#include <string>
#include <iostream>

void parserFunction(int argc, char* argv[], uint16_t& length, uint16_t& width, std::string& inpt, std::string& outpt, uint64_t& iter, uint64_t& freq) {
    for (size_t i = 1; i < argc; i++) {
        if (argv[i][0] == '-' and argv[i][1] != '-') {
            if (argv[i][1] == 'l') length = std::stoi(argv[i + 1]);
            if (argv[i][1] == 'w') width = std::stoi(argv[i + 1]);
            if (argv[i][1] == 'i') inpt = argv[i + 1];
            if (argv[i][1] == 'o') outpt = argv[i + 1];
            if (argv[i][1] == 'm') iter = std::stoi(argv[i + 1]);
            if (argv[i][1] == 'f') freq = std::stoi(argv[i + 1]);
        } else if (argv[i][0] == '-' and argv[i][1] == '-') {
            if (strcmp(argv[i],"--length")==0)  length = std::stoi(argv[i + 1]);
            if (strcmp(argv[i],"--width")==0)  width = std::stoi(argv[i + 1]);
            if (strcmp(argv[i],"--input")==0)  inpt = argv[i + 1];
            if (strcmp(argv[i],"--output")==0)  outpt = argv[i + 1];
            if (strcmp(argv[i],"--max-iter")==0) iter = std::stoi(argv[i + 1]);
            if (strcmp(argv[i],"--freq")==0) freq = std::stoi(argv[i + 1]);
        }
    }
    std::cout<<"parser finish\n";

}