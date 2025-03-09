#include "268.h"

void result_arr(char* str, char* str_res, int n) {
    
    int count_not_space = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            str_res[count_not_space] = str[i];
            count_not_space++;
        } else if (count_not_space != 0 && str[i] == ' ' && (i + 1) < n && str[i+1] != ' ') {
            str_res[count_not_space] = str[i];
            count_not_space++;
        }
    }
    str_res[count_not_space] = '\0';
    output_arr(str_res, count_not_space);
}

void output_arr(char* str_res, int n) {
    char* ptr = str_res;
    while (*ptr) {
        std::cout << *ptr;
        ptr++;
    }
}