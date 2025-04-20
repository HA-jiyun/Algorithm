#include <iostream>
#include <stack>
using namespace std;

// 제출번호 93351356 참고
int main() {
    int B, N;
    stack<char> NtoB;
    cin >> N >> B;

    while (N > 0) {
        if (N % B < 10)
            NtoB.push(N % B + '0');
        else //A=10
            NtoB.push((N % B - 10) + 'A');

        N = N / B;
    }

    while (!NtoB.empty()) {
        cout << NtoB.top();
        NtoB.pop();
    }
    return 0;
}