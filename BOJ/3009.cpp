#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    int arrX[3], arrY[3];
    for (int i = 0; i < 3; i++) {
        cin >> arrX[i] >> arrY[i];
    }
    
    sort(arrX, arrX + 3);
    sort(arrY, arrY + 3);

    int X = arrX[0] == arrX[1] ? arrX[2] : arrX[0];
    int Y = arrY[0] == arrY[1] ? arrY[2] : arrY[0];

    cout << X << " " << Y;

    return 0;
}