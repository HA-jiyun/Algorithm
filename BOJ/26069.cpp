#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    unordered_set<string> s;
    s.insert("ChongChong");

    while (N--) {
        string a, b;
        cin >> a >> b;
        if (s.count(a)) {
            s.insert(b);
        }
        else if (s.count(b)) {
            s.insert(a);
        }
    }

    cout << s.size();
    return 0;
}