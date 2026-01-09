#include <iostream>
#include <cmath>
using namespace std;

void cantorSet(int n) {
    if (n == 0) {
        cout << "-";
        return;
    }

    cantorSet(n - 1);
    for (int i = 0; i < pow(3, n - 1); ++i) {
        cout << " ";
    }
    cantorSet(n - 1);
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    while (cin >> N) {
        cantorSet(N);
        cout << '\n';
    }

    return 0;
}