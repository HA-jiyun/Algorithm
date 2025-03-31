#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, i, j;
	cin >> n >> m;

	int* array = new int[n];
	for (int a = 0; a < n; a++) {
		array[a] = a + 1;
	}

	for (int b = 0; b < m; b++) {
		cin >> i >> j;
		reverse(array + i - 1, array + j);
	}

	for (int c = 0; c < n; c++)
		cout << array[c] << " ";

	return 0;
}