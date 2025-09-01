#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    string str;
    cin >> str;

    int cnt = 0;
    for (int i = 1; i <= str.length(); ++i) {
        unordered_set<string> s;
        for (int j = 0; j+i <= str.length(); ++j) {
            s.insert(str.substr(j,i));
        }
        cnt += s.size();
    }

    cout << cnt;
    return 0;
}