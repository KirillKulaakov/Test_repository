#include "268.h"

int main() {
    int n;
    std::cout << "Enter a n: ";
    std::cin >> n;
    std::cin.ignore();
    if (n <= 0) return -1;
    char* str = new(std::nothrow) char[n+1];
    char* str_res = new(std::nothrow) char[n+1];
    if (str == nullptr || str_res == nullptr) {
        return -1;
    }
    std::cin.get(str, n+1);
    result_arr(str, str_res, n);
    delete(str);
    delete(str_res);
    return 0;
}