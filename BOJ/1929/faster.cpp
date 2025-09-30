#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int M, N;
    cin >> M >> N;

    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; ++i) {
        if (!isPrime[i])
            continue;

        int j = i;
        while (i * j <= N) {
            isPrime[i * j] = false;
            j++;
        }
    }

    for (int i = M; i <= N; ++i) {
        if (isPrime[i])
            cout << i << '\n';
    }

    return 0;
}