#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 제출번호 97724617 참고
int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    cin >> M;
    for (int i = 0; i < M; ++i) {
        int m;
        cin >> m;
        cout << upper_bound(vec.begin(), vec.end(), m) - lower_bound(vec.begin(), vec.end(), m) << " ";
    }

    return 0;
}