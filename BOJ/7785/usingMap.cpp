#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    map<string, string, greater<string>> name;
    string str1, str2;

    for (int i = 0; i < n; i++) {
        cin >> str1 >> str2;
        name[str1] = str2;
    }

    for (const auto& p : name) {
        if (p.second == "enter")
            cout << p.first << '\n';
    }

    return 0;
}