#include "378.h"

void clear_memory(float** ptr, int n) {
    for (int i = 0; i < n; i++) {
        delete(ptr[i]);
    }
    delete(ptr);
}

int matrix_initialization(float** matrix, float* numbers) {
    for (int i = 0; i < N; i++) {
        matrix[i] = new(std::nothrow) float[N];
        if (matrix[i] == nullptr) {
            clear_memory(matrix, i);
            delete(numbers);
            return -1;
        }
    }
    return 0;
}

int enter_numbers(float* numbers) {
    using namespace std;

    cout << "Enter a 8 numbers: ";
    for (int i = 0; i < N; i++) {
        if (!(cin >> numbers[i])) {
            cout << "incorrect number" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            delete(numbers);
            return -1;
        }
    }
    return 0;
}

void input_matrix(float** matrix, float* numbers) {4
    int pow_number = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = pow(numbers[j], pow_number);
        }
        pow_number++;
    }
}

void output_matrix(float** matrix) {
    using namespace std;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout.width(12);
            cout.precision(5);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}