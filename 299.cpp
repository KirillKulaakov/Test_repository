#include "299.h"

int main() {
    using namespace std;

    float arr[N], value = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    if (arr[0] >= 0) {
        value = min(arr);
    } else {
        value = max(arr);
    }
    for (int i = 0; i < N; i++) {
        arr[i] = arr[i] * (value * value);
    }
    for (float x: arr) {
        cout << x << " ";
    }
    return 0;
}
