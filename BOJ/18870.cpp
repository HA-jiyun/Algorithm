#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> vec(N), result(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
        result[i] = vec[i];
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for (int i = 0; i < N; i++) {
        cout << lower_bound(vec.begin(), vec.end(), result[i]) - vec.begin() << " ";
    }

    return 0;
}