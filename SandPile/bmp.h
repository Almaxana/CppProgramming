#pragma once
#include <deque>
#include <string>

const unsigned char BYTES_PER_PIXEL = 3; /// red, green, & blue
const unsigned char FILE_HEADER_SIZE = 14;
const unsigned char INFO_HEADER_SIZE = 40;
const unsigned char BYTES_PER_ONE_COLOR = 1;

unsigned char* createBitmapInfoHeader (uint16_t length, uint16_t width);

unsigned char* createBitmapFileHeader (uint16_t length, uint64_t fullLine);

void generateBitmapImage (unsigned char*** image, uint16_t length, uint16_t width, char* imageFileName);
void bmp (uint16_t length, uint16_t width, std::deque<std::deque<int64_t>>& matrix, std::string outpt, uint64_t numberImage);


