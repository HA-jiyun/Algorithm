#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string str;
        cin >> str;
        
        int ans = 0;
        for (int j = 0; j < str.size(); ++j) {
            if (str[j] == '(')
                ans++;
            else
                ans--;
            
            if (ans < 0)
                break;
        }
        
        if (ans == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    
    return 0;
}