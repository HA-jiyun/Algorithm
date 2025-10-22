#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string str;
        cin >> str;
        
        vector<int> left;
        vector<int> right;
        for (int j = 0; j < str.size(); ++j) {
            if (str[j] == '(')
                left.push_back(j);
            else
                right.push_back(j);
        }
        
        bool ans = true;
        if (left.size() != right.size())
            ans = false;
        else {
            for (int j = 0; j < left.size(); ++j) {
                if (left[j] > right[j]) {
                    ans = false;
                    break;
                }
            }
        }
        if (ans == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    
    return 0;
}