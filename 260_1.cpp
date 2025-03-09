#include "260.h"

std::string sbstr(const std::string str, int n) {
    if (str.size() > n) {
        std::string str_new = str.substr(0, n);
        return str_new;
    }
    return str;
}

void punct_1 (const std::string str) {
    std::cout << "a)";
    for (char ch: str) {
        if (ch == ':') {
            std::cout << ch;
            break;
        }
        std::cout << ch;
    }
}

void punct_2 (const std::string str, unsigned int n, size_t index_1) {
    std::cout << std::endl << "b)";
    for (unsigned int i = index_1 + 1; i < n; i++) {
        std::cout << str[i];
    }
}

void punct_3 (const std::string str, size_t index_1, size_t index_2, unsigned int n) {
    std::cout << std::endl << "c)";
    for (unsigned int i = 0; i < n; i++) {
        if (i > index_1 && i < index_2) {
            std::cout << str[i];
        }
    }
}