#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int arr[10001] = {0}; //maxValue + 1
    int n;
    for (int i = 0; i < N; i++) {
        cin >> n;
        arr[n]++;
    }

    for (int i = 1; i < 10001; i++) 
        for (int j = 0; j < arr[i]; j++)
            cout << i << '\n';
    
    return 0;
}