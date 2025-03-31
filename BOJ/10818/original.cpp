#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n, a;
    cin >> n;
    int *array = new int[n]();

    for (int i = 0; i < n; i++) {
        cin >> a;
        array[i] = a;
    }

    int max = *max_element(array, array + n);
    int min = *min_element(array, array + n);

    cout << min << " " << max;

    delete[] array;
    return 0;
}