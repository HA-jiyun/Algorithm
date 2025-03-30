#include <iostream>
using namespace std;

int main()
{
	int i=0, N;
	cin >> N;

    while (i < N-1) {
        for (int j = 0; j < N - (i + 1); j++)
            cout << " ";
        for (int k = 0; k < (i * 2 + 1); k++)
            cout << "*";

        cout << '\n';
        i++;
    }

    for (int j = 0; j < (2 * N - 1); j++) {
        cout << "*";
    }
    cout << '\n';

    while (i > 0) {
        for (int j = N; j > i ; j--)
            cout << " ";
        for (int k = 0; k < (i * 2 - 1); k++)
            cout << "*";

        cout << '\n';
        i--;
    }

	return 0;
}