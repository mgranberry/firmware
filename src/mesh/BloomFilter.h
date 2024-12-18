#pragma once
#include <Arduino.h>

template <typename T> class BloomFilter {
    private:
        T filter;
        int filterBits;
        int hashCount;
        int itemCount;
    public: 
        T insert(uint8_t **hashes, size_t hashSize);
        T unionWith(const T &other);
};

template <typename T> T BloomFilter<T>::insert(uint8_t **hashes, size_t hashSize) {
    return this;
}