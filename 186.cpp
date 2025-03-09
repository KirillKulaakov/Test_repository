#include <iostream>

int factorial(int n);

int main() {
    using namespace std;

    int n;
    cout << "Enter a 'n': ";
    cin >> n;
    float *arr {new float[n]};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long double mul_reverse = 1.0;
    for (int i = 0; i < n; i++) {
        if ((i + 1) < arr[i] && arr[i] < factorial(i)){
            mul_reverse *= arr[i];
        }
    }
    cout << "Reverse mul: " << 1.0 / mul_reverse;
    delete(arr);
    return 0;
}

int factorial(int n) {
    int mul = 1;
    for (int i = 1; i < n + 1; i++) {
        mul *= i;
    }
    return mul;
}