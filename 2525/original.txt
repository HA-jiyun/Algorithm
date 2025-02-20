#include <iostream>
using namespace std;

int main() {
    int h, m, c;
    cin >> h >> m >> c;

    int c_h = c / 60;
    int c_m = c % 60;
    
    if (m + c_m >= 60) {
        if (h + c_h >= 23) {
            cout << h + c_h - 23 << " " << m + c_m - 60;
        }
        else {
            cout << h + c_h + 1 << " " << m + c_m - 60;
        }
    }
    else {
        if (h + c_h >= 24) {
            cout << h + c_h - 24 << " " << m + c_m;
        }
        else {
            cout << h + c_h << " " << m + c_m;
        }
    }
}