#include <iostream>
using namespace std;

int main()
{
	// 제출번호 90439743 참고
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n, a, min=1000000, max=-1000000;
    cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}

	cout << min << " " << max;

    return 0;
}