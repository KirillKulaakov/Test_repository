#include "260.h"


int main() {
    using namespace std;

    unsigned int n;
    cout << "Enter a n: ";
    cin >> n;
    cin.ignore();
    string str;
    cout << "Enter a n symbols: ";
    getline(cin, str);
    str = sbstr(str, n);
    size_t index_1 = str.find(':');
    size_t index_2 = str.find(':', index_1+1);
    punct_1(str);
    punct_2(str, n, index_1);
    punct_3(str, index_1, index_2, n);
    return 0;
}