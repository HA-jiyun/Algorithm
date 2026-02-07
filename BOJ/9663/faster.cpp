#include <iostream>
using namespace std;

// https://congcoding.tistory.com/70
#define MAX 15

int N, total = 0;
bool v1[MAX];
bool v2[MAX + MAX];
bool v3[MAX + MAX];

void nqueen(int x) {
    if (x == N) {
        total++;
        return;
    }
    for (int y = 0; y < N; y++) {
        if (v1[y] || v2[x + y] || v3[x - y + N - 1])
            continue;
        v1[y] = true;
        v2[x + y] = true;
        v3[x - y + N - 1] = true;
        nqueen(x + 1);
        v1[y] = false;
        v2[x + y] = false;
        v3[x - y + N - 1] = false;
    }
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    cin >> N;
    nqueen(0);
    cout << total;

    return 0;
}