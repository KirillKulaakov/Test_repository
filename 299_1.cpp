#include "299.h"

int min(float* arr) {
    int min = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int max(float* arr) {
    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < max) {
            max = arr[i];
        }
    }
    return max;
}