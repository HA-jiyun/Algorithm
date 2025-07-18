#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    while (N > 0) {
        if (N % 5 == 0) {
            N = N - 5;
            sum++;
        }
        else {
            N = N - 3;
            sum++;
        }
    }
    
    if (N == 0) cout << sum;
    else cout << -1;

    return 0;
}