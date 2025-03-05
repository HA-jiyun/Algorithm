#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, num=0, temp;
	cin >> n >> m;

	int* array = new int[n];
	for (int a = 0; a < n; a++) {
		array[a] = a + 1;
	}

	for (int b = 0; b < m; b++) {
		cin >> i >> j;
		while (j - 1 - num > i - 1 + num) {
			temp = array[i - 1 + num];
			array[i - 1 + num] = array[j - 1 - num];
			array[j - 1 - num] = temp;
			num += 1;
		}
		num = 0;
	}

	for (int c = 0; c < n; c++)
		cout << array[c] << " ";

	return 0;
}