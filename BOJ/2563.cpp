#include <iostream>
using namespace std;

int arr[100][100] = { 0, };

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int x, y; //자연수
        cin >> x >> y;

        for (int m = 0; m < 10; m++) {
            for (int n = 0; n < 10; n++) {
                arr[x + m][y + n] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j] == 1) {
                area++;
            }
        }
    }
    cout << area;
    return 0;
}
