#include <iostream>
#include <vector>
using namespace std;

constexpr int MAX_NUM = 1000000;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    vector<bool> isPrime(MAX_NUM +1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX_NUM; ++i) {
        if (!isPrime[i]) continue;
        for(int j = i; i * j <= MAX_NUM; ++j){
            isPrime[i * j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i < isPrime.size(); ++i) {
        if (isPrime[i])
            primes.push_back(i);
    }

    int T, n;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        cin >> n;

        int cnt = 0;
        for (auto p : primes) {
            if (p > n / 2) break;
            if (isPrime[n - p])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}