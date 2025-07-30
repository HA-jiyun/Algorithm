#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comparePoint(const pair<int,string>& a, const pair<int,string>& b) {
    return a.first < b.first;
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int,string>> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i].first >> vec[i].second;
    }
    stable_sort(vec.begin(), vec.end(), comparePoint);

    for (int i = 0; i < N; i++) {
        cout << vec[i].first << " " << vec[i].second << '\n';
    }
    
    return 0;
}