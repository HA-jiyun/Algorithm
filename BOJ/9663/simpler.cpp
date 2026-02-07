#include <iostream>
using namespace std;

// https://cryptosalamander.tistory.com/58
#define MAX 15

int N, total = 0;
int col[MAX];

bool check(int level) {
    for (int i = 0; i < level; i++) {
        if (col[i] == col[level] || abs(col[level] - col[i]) == level - i)
            return false;
    }
    return true;
};

void nqueen(int x) {
    if (x == N) {
        total++;
        return;
    }
    else {
        for (int i = 0; i < N; i++) {
            col[x] = i;
            if (check(x))
                nqueen(x + 1);
        }
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