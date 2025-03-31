#include <iostream>
using namespace std;

int main()
{
	string word;
	cin >> word;

	int sum = 0;
	for (int i = 0; i < word.size(); i++) {
		int val = word[i] - 'A';
		if (val <= 14)
			sum += val / 3 + 3;
		else if (val <= 18)
			sum += 8;
		else if (val <= 21)
			sum += 9;
		else
			sum += 10;
	}

	cout << sum;
	return 0;
}