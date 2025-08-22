#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    unordered_map<int, int> cards;

    cin >> N;    
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        cards[n]++;
    }

    cin >> M;
    for (int i = 0; i < M; ++i) {
        int m;
        cin >> m;
        cout << cards[m] << " ";
    }

    return 0;
}