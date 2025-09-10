#include <iostream>
#include <cmath>
using namespace std;

long long ans(long long a){
    long long int num = a, i = 2;

    if (a < 2)
        num = 2;

    while (i <= sqrt(num)) {
        if (num % i == 0) {
            i = 2;
            num++;
        }
        else {
            i++;
        }
    }
    return num;
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        long long n;
        cin >> n;
        cout << ans(n) << '\n';
    }

    return 0;
}