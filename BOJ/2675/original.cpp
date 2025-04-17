#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, R;
	cin >> T;
	cin.ignore();

	for (int n = 0; n < T; n++) {
		// char배열로 문자열 입력받기
		char ch[23] = { NULL };
		cin.getline(ch, 23);

		R = ch[0] - '0';
		vector<char> repeated;

		for (int i = 2; i < 23; i++) {
			if (ch[i] != NULL) {
				for (int j = 0; j < R; j++) {
					repeated.push_back(ch[i]);
				}
			}
		}
		
		for (int i = 0; i < repeated.size(); i++) {
			cout << repeated[i];
		}
		cout << endl;
	}
	return 0;
}
