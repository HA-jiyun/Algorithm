#include <iostream>
using namespace std;

void hanoi(int n, int start, int to, int pass) {
    if (n == 1)
        cout << start << " " << to << '\n';
    else {
        hanoi(n - 1, start, pass, to);
        cout << start << " " << to << '\n';
        hanoi(n - 1, pass, to, start);
    }
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    
    cout << (1 << N) - 1 << '\n';
    hanoi(N, 1, 3, 2);

    return 0;
}