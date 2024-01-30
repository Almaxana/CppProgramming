#include "bmp.h"
#include "parser.h"
#include "pileChanging.h"

#include <deque>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    uint16_t length;
    uint16_t width;
    std::string inpt;
    std::string outpt;
    uint64_t iter;
    uint64_t freq;

    parserFunction(argc, argv, length, width, inpt, outpt, iter, freq);

    std::deque<std::deque<int64_t>> pile;
    std::deque<int64_t> a (width, 0);
    for (size_t i = 0; i < length; i++){
        pile.push_back(a);
    }

    std::fstream f (inpt, std::ios_base::in);
    std::string s;
    uint16_t x;
    uint16_t y;
    uint64_t value;
    while (!f.eof()) {
        f>>x>>y>>value;
        pile[x][y] = value;
    }

    bool fl = true; ///fl = true if unstable cells exist
    uint64_t count_iter = 0;
    while (fl and count_iter < iter) {

        fl = PileDrop(length, width, pile, fl);

        count_iter++;
        if (freq!=0 and count_iter % freq == 0) {
            bmp(length, width, pile, outpt, count_iter / freq);
        }
    }

    if (freq == 0) bmp(length, width, pile, outpt, 0);

    return 0;
}
