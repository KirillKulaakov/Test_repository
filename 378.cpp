#include "378.h"

int main() {
    using namespace std;


    float *numbers = new(nothrow) float[N];
    float **matrix = new(nothrow) float*[N];
    if (numbers == nullptr or matrix == nullptr) return -1;
    else if (matrix_initialization(matrix, numbers) == -1) return -1;
    else if (enter_numbers(numbers) == -1) return -1;
    input_matrix(matrix, numbers);
    output_matrix(matrix);
    return 0;
}