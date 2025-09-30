#include <iostream>
#include <vector>
using namespace std;

vector<int> primes;
bool isPrime(int a) {
    for (int i = 0; i < primes.size(); ++i) {
        if (primes[i]*primes[i] > a)
            break;
        else if (a % primes[i] == 0)
            return false;
    }
    return true;
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int M, N;
    cin >> M >> N;

    for (int i = 2; i <= 1000; ++i) {
        if (isPrime(i))
            primes.push_back(i);
    }

    for (int i = M; i <= N; ++i) {
        if (i != 1) {
            if (isPrime(i))
                cout << i << '\n';
        }
    }

    return 0;
}