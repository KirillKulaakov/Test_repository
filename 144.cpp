#include <iostream>

int fibonachi_a(int n);
int fibonachi_b(int n);

int main() {
    using namespace std;

    int n;
    cout << "Enter a 'n': ";
    cin >> n;
    cout << "a) " << fibonachi_a(n) << endl;
    cout << "b) " << fibonachi_b(n);
    return 0;
}

int fibonachi_a(int n) {
    if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    else return fibonachi_a(n - 1) + fibonachi_a(n - 2);
}

int fibonachi_b(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonachi_b(n - 1) + fibonachi_b(n - 2) + fibonachi_a(n - 2);
}