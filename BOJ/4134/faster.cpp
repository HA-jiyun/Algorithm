#include <iostream>
#include <vector>
using namespace std;

vector<long long> primes;
bool isPrime(long long a) {
    for (int i = 0; i < primes.size(); ++i) {
        if (primes[i]*primes[i] > a)
            break;
        else if (a % primes[i] == 0)
            return false;
    }
    return true;
}

long long ans(long long a) {
    long long n = a;
    while (!isPrime(n)) {
        n++;
    }
    return n;
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for (int i = 2; i <= 63246; ++i) {
        if (isPrime(i))
            primes.push_back(i);
    }

    for (int i = 0; i < N; ++i) {
        long long n;
        cin >> n;

        if (n <= 2)
            cout << 2 << '\n';
        else
            cout << ans(n) << '\n';
    }

    return 0;
}