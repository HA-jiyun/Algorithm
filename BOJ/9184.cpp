#include <iostream>
using namespace std;

int arr[21][21][21];

int w(int a, int b, int c) {
    // 인덱스범위 제한
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
   
    // dp
    if (arr[a][b][c] == 0) {
        if (a < b && b < c)
            arr[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        else
            arr[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }
    return arr[a][b][c];
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int x, y, z;
    while (1) {
        cin >> x >> y >> z;
        if (x == -1 && y == -1 && z == -1)
            break;
        cout << "w(" << x << ", " << y << ", " << z << ") = " << w(x, y, z) << '\n';
    }

    return 0;
}