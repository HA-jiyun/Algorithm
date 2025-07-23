#include <iostream>
#include <vector>
using namespace std;

// 제출번호 96623558 참고
void merge(vector<int>& vec, int first, int mid, int last) {
    int n1 = mid - first + 1;
    int n2 = last - mid;

    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; ++i) L[i] = vec[first + i];
    for (int j = 0; j < n2; ++j) R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = first;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) vec[k++] = L[i++];
        else              vec[k++] = R[j++];
    }
    while (i < n1) vec[k++] = L[i++];
    while (j < n2) vec[k++] = R[j++];
}

void conquer(vector<int>& vec, int first, int last) {
    int mid;

    if (first < last) {
        mid = (first + last) / 2;
        conquer(vec, first, mid);
        conquer(vec, mid+1, last);
        merge(vec, first, mid, last);
    }
}


int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    conquer(arr, 0, N-1);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}