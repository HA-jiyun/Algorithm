#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << 10000 + a * 1000;
    }
    else if (a != b && b != c && a != c) {
        // max 함수 활용하여 개선
        // 제출번호 90340396 참고
        cout << max(max(a,b),c) * 100;
    }
    else {
        if (a == b || a == c)
            cout << 1000 + a * 100;
        else // b == c
            cout << 1000 + b * 100;
    }
}