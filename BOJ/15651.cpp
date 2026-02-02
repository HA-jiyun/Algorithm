#include <iostream>
using namespace std;

#define MAX 7

int N, M;
int selected[MAX] = { 0, };

void dfs(int depth) {
    if (depth == M) {
        for (int i = 0; i < M; ++i) {
            cout << selected[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; ++i) {
        selected[depth] = i;
        dfs(depth + 1);
    }
};

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    cin >> N >> M;
    dfs(0);
    
    return 0;
}