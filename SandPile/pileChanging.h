#pragma once
#include <deque>
#include <cmath>

void PushRight(std::deque<std::deque<int64_t>>& matrix, const uint16_t length);

void PushLeft(std::deque<std::deque<int64_t>>& matrix, const uint16_t length);

void PushUp(std::deque<std::deque<int64_t>>& matrix, const uint16_t width);

void PushDown(std::deque<std::deque<int64_t>>& matrix, const uint16_t width);

bool PileDrop(uint16_t& length, uint16_t& width, std::deque<std::deque<int64_t>>& pile, bool fl);