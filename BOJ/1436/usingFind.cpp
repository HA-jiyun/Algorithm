#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 666;
    int count = 1;
    while (count < N) {
        num++;
        if (to_string(num).find("666") != string::npos)
            count++;        
    }

    cout << num;
    return 0;
}