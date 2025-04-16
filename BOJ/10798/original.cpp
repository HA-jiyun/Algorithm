#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char arr[5][15];
    memset(arr, '.', sizeof(arr));

    for (int i = 0; i < 5; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            arr[i][j] = str[j];
        }
    }

    for (int j = 0; j < 15; j++) {
        for (int i = 0; i < 5; i++) {
            if (arr[i][j] == '.')
                continue;
            else {
                cout << arr[i][j];
            }
        }
    }

    return 0;
}