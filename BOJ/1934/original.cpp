#include <iostream>
using namespace std;

int ans(int a, int b) {
    int a_ = a, b_ = b;
    while (a_ != b_) {
        if (a_ < b_)
            a_ += a;
        else
            b_ += b;
    }
    return a_;

}

int main() {
    int T, A, B;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> A >> B;
        cout << ans(A, B) << '\n';
    }

    return 0;
}