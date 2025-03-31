#include <iostream>
#include<string>
using namespace std;

int main()
{
	char ch[101]={NULL}; //초기화되어있어야 루프 오류x
	cin >> ch;

	int atoz[26];
	fill_n(atoz, 26, -1);

	for (int i = 0; i < 100; i++) {
		if (atoz[ch[i] - 'a'] == -1) {
			atoz[ch[i] - 'a'] = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		cout << atoz[i] << " ";
	}

	return 0;
}