#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int m;
        cin >> m;
        if (binary_search(vec.begin(), vec.end(), m))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }

    return 0;
}