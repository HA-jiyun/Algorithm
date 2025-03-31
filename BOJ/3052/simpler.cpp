#include <iostream>
using namespace std;

int main()
{
	// 제출번호 90908143 참고
	// 나머지는 배열의 index와 같다는 점을 활용
	int num, count = 0;
	int array[42] = {0, };

	for (int i = 0; i < 10; i++) {
		cin >> num;
		array[num % 42] = 1;
	}

	for (int j = 0; j < 42; j++)
		count += array[j];

	cout << count;
	return 0;
}