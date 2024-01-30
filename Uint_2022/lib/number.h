#pragma once
#include <cinttypes>
#include <iostream>
#include <string>

const uint8_t ASKII_SYMBOL_CODE_0 = 48;
const uint8_t SIZE_OF_ARRAY = 68;
const long long BASE = 1000000000;

struct uint2022_t {
    uint32_t arr [SIZE_OF_ARRAY] = {0};

};

static_assert(sizeof(uint2022_t) <= 300, "Size of uint2022_t must be no higher than 300 bytes");

uint2022_t from_uint(uint32_t i);

uint2022_t from_string(const char* buff);

uint2022_t operator+(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t operator-(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t operator*(const uint2022_t& lhs, const uint2022_t& rhs);

uint2022_t operator/(const uint2022_t& lhs, const uint2022_t& rhs);

bool operator==(const uint2022_t& lhs, const uint2022_t& rhs);

bool operator!=(const uint2022_t& lhs, const uint2022_t& rhs);

bool operator>(const uint2022_t& lhs, const uint2022_t& rhs);

bool operator>=(const uint2022_t& lhs, const uint2022_t& rhs);

std::ostream& operator<<(std::ostream& stream, const uint2022_t& value);

std::istream& operator>>(std::istream& stream, uint2022_t& value);
