#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 제출번호 97820556 참고
int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<string> ear(N), ans;
    for (int i = 0; i < N; ++i) {
        cin >> ear[i];
    }
    sort(ear.begin(), ear.end());

    for (int i = 0; i < M; ++i) {
        string str;
        cin >> str;
        if (binary_search(ear.begin(), ear.end(), str) == true)
            ans.push_back(str);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << '\n';
    }
    
    return 0;
}