#include <iostream>
using namespace std;

int main() {
    // char 배열로 취급하여 자릿수 추출
    // 아스키코드를 활용해 char - '0' 하면 int로 변경 가능
    int a;
    char b[4];
    cin >> a >> b;

    int c1 = a * (b[2] - '0');
    int c2 = a * (b[1] - '0');
    int c3 = a * (b[0] - '0');

    cout << c1 << '\n'
        << c2 << '\n'
        << c3 << '\n'
        << c1 + c2 * 10 + c3 * 100;
}
