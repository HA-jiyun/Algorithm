#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    map<string, int> name;
    int cnt = 0;
    for (int i = 0; i < N + M; ++i) {
        string str;
        cin >> str;
        name[str]++;

        if (name[str] == 2)
            cnt++;
    }

    cout << cnt << '\n';
    for (auto &p : name) {
        if (p.second == 2)
            cout << p.first << '\n';
    }
    
    return 0;
}