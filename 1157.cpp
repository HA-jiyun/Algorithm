#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL), cout.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	int count[26] = {};
	for (int i = 0; i < str.size(); i++) {
		int val = str[i] - 'A';
		if (val >= 32)
			val -= 32;

		count[val] += 1;
	}

	int freq_idx = 0;
	for (int i = 1; i < 26; i++) {
		if (count[freq_idx] < count[i])
			freq_idx = i;
	}

	int maxCount = 0;
	for (int i = 0; i < 26; i++) {
		if (count[i] == count[freq_idx])
			maxCount++;
	}

	if (maxCount > 1)
		cout << "?";
	else
		cout << (char)('A' + freq_idx);

	return 0;
}