#include <iostream>
using namespace std;

#define MAX 8

int N, M;
int selected[MAX] = { 0, };

void dfs(int depth, int start) {
    if (depth == M) {
        for (int i = 0; i < M; ++i) {
            cout << selected[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = start; i <= N; ++i) {
        selected[depth] = i;
        dfs(depth + 1, i + 1);
    }
};

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    cin >> N >> M;
    dfs(0, 1);
    
    return 0;
}