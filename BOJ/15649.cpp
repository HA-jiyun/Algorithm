#include <iostream>
using namespace std;

#define MAX 8

int N, M;
bool visited[MAX + 1] = { 0, };
int arr[MAX] = { 0, };

void dfs(int depth) {
    if (depth == M) {
        for (int i = 0; i < M; ++i) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1);
            visited[i] = false;
        }   
    }
};


int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    cin >> N >> M;
    dfs(0);
    
    return 0;
}