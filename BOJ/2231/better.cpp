#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int len = to_string(N).length();
    int m = max(1, N - 9 * len);
    while (m < N) {
        int sum = m;
        int idxNum = m;
        while (idxNum > 0) {
            sum += idxNum % 10;
            idxNum /= 10;
        }

        if (sum == N)
            break;
        m++;
    }

    if (m == N)
        m = 0;

    cout << m;
    return 0;
}