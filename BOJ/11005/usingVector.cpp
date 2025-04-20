#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int B, N;
    vector<char> NtoB;
    cin >> N >> B;

    int val = N / B;
    int num = N % B;
    while (1) {
        if (num < 10)
            NtoB.push_back(num + '0');
        else //A=10
            NtoB.push_back(num + 55);

        if (val == 0)
            break;
        else {
            num = val % B;
            val = val / B;
        }
    }

    reverse(NtoB.begin(),NtoB.end());
    for (int i = 0; i < NtoB.size(); i++) {
        cout << NtoB[i];
    }

    return 0;
}
