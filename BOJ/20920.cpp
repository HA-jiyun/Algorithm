#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> um;
    while (N--) {
        string w;
        cin >> w;

        if (w.length() >= M) {
            um[w]++;
        }
    }
    vector<pair<string, int>> v(um.begin(), um.end());
    
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second)
            return a.second > b.second;
        if (a.first.length() != b.first.length())
            return a.first.length() > b.first.length();
        return a.first < b.first;
        });

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << '\n';
    }

    return 0;
}