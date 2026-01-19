#include <iostream>
using namespace std;

// 제출번호 101996748
bool isBlank(int x, int y) {
    while (x > 0 || y > 0) {
        if (x % 3 == 1 && y % 3 == 1)
            return true;
        x /= 3;
        y /= 3;
    }
    return false;
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (isBlank(i, j))
                cout << ' ';
            else
                cout << '*';
        }
        cout << '\n';
    }

    return 0;
}