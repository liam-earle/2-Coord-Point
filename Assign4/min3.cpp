#include <algorithm>

#include <iostream>

template <class T>

//Get min number
T min3(T x, T y, T z) {
    return std::min(x, std::min(y, z));
}
