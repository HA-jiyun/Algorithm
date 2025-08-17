#include <iostream>
#include <set>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    set<string, greater<string>> name;
    string str1, str2;

    for (int i = 0; i < n; i++) {
        cin >> str1 >> str2;
        if (str2 == "enter") name.insert(str1);
        else if (str2 == "leave") name.erase(str1);
    }

    for (string val : name) {
        cout << val << '\n';
    }

    return 0;
}