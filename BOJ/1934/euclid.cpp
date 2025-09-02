#include <iostream>
using namespace std;

int ans(int a, int b) {
    if (b == 0)
        return a;
    else 
        return ans(b, a % b);
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int T, A, B;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> A >> B;
        cout << A*B / ans(A, B) << '\n';
    }

    return 0;
}