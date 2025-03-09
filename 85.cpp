#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    float a, h, sum = 0.0;
    int n;
    cout << "Enter a, h:" << endl;
    cin >> a >> h;
    cout << "Enter a 'n':" << endl;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {
        sum += (a * a + 1) * cos(a) * cos(a);
        if (i != 0 && i != n) {
            sum *= 2;
        }
        a += h;
    }
    cout << "Result: " << sum;
    return 0;
}