#include <iostream>
using namespace std;

void makePattern(int x, int y, int n) {
    if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
        cout << " ";
    else {
        if (n / 3 == 0)
            cout << "*";
        else
            makePattern(x, y, n/3);
    }
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            makePattern(i, j, N);
        }
        cout << '\n';
    }

    return 0;
}