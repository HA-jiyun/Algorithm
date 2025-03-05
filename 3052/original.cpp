#include <iostream>
using namespace std;

int main()
{
	int num, count = 0;
	int array[10];

	for (int i = 0; i < 10; i++) {
		cin >> num;
		array[i] = num % 42;
	}

	// 체크한 수는 -1로 변환, 다음에 비교하지 않기
	for (int j = 0; j < 10; j++) {
		for (int k = 1; k < 10-j; k++) {
			if ((array[j] != -1) && (array[j] == array[j + k])) {
				count += 1;
				array[j + k] = -1;
			}
		}
	}

	cout << 10 - count;
	return 0;
}