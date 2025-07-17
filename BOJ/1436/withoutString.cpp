#include <iostream>
using namespace std;

bool check(int num) {
    int cnt = 0;
    while (num > 0) {
        if (num % 10 == 6) {
            cnt++;
            if (cnt == 3) return true;
        }
        else
            cnt = 0;
        num /= 10;
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    int num = 666;
    int count = 1;
    while (count < N) {
        num++;
        if (check(num)) count++;        
    }

    cout << num;
    return 0;
}