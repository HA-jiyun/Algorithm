#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    vector<int> A(a);
    vector<int> B(b);
    for (int i = 0; i < a; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < b; ++i) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int i = 0, j = 0, cnt = 0;
    while (i < a && j < b) {
        if (A[i] == B[j]) {
            i++;
            j++;
        }
        else if (A[i] < B[j]) {
            i++;
            cnt++;
        }
        else {
            j++;
            cnt++;
        }
    }

    if (i < a) {
        cnt += a - i;
    }
    else if (j < b) {
        cnt += b - j;
    }
    cout << cnt;
    
    return 0;
}