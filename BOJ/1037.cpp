#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a;
    
    vector<int> v;
    while (a--) {
        cin >> b;
        v.push_back(b);
    }

    if (v.size() == 1) {
        cout << v[0] * v[0];
    }
    else {
        cout << *min_element(v.begin(),v.end()) * *max_element(v.begin(), v.end());
    }
    
    return 0;
}