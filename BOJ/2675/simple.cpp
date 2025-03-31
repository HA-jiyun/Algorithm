#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, R;
	string s;
	cin >> T;

	for (int n = 0; n < T; n++) {
		cin >> R;
		cin >> s;
		vector<char> repeated;

		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < R; j++) {
				repeated.push_back(s[i]); //string 인덱스 접근 시 반환값 char
			}
		}
		
		for (int i = 0; i < repeated.size(); i++) {
			cout << repeated[i];
		}
		cout << endl;
	}
	return 0;
}