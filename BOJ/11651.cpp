#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareY(const pair<int,int>& a, const pair<int,int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int,int>> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i].first >> arr[i].second; 
    }
    sort(arr.begin(), arr.end(), compareY);

    for (int i = 0; i < N; i++) {
        cout << arr[i].first << " " << arr[i].second << '\n';
    }
    
    return 0;
}
