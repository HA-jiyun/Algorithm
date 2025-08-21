#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<string> pokemonNum(N);
    unordered_map<string, int> pokemonName;
    for (int i = 0; i < N; ++i) {
        string str;
        cin >> str;
        pokemonNum[i] = str;
        pokemonName[str] = i + 1;
    }

    for(int i = 0; i < M; ++i) {
        string str;
        cin >> str;
        if (isdigit(str[0])) {
            int num = stoi(str);
            cout << pokemonNum[num-1] << '\n';
        }
        else {
            cout << pokemonName.find(str)->second << '\n';
        }
    }

    return 0;
}