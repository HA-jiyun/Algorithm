#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << 10000 + a * 1000;
    }
    else if (a != b && b != c && a != c) {
        int biggest = a;
        if (biggest < b)
            biggest = b;
        if (biggest < c)
            biggest = c;
        cout << biggest * 100;
    }
    else {
        if (a == b || a == c)
            cout << 1000 + a * 100;
        else // b == c
            cout << 1000 + b * 100;
    }
}