#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    string str;
    cin >> str;

    unordered_set<string> s;
    for (int i = 0; i < str.length(); ++i) {
        for (int j = i; j < str.length(); ++j) {
            s.insert(str.substr(i, j - i + 1));
        }
    }

    cout << s.size();
    return 0;
}