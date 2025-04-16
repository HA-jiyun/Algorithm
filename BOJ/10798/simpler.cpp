#include <iostream>
#include <vector>
using namespace std;

int main() {
    //제출번호 93184085 참고
    vector<string> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < 15; j++) {
        for (int i = 0; i < 5; i++) {
            if (j < arr[i].size()) {
                cout << arr[i][j];
            }
        }
    }

    return 0;
}
