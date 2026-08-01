#include <vector>
using namespace std;

int solution(int n) {
    vector<int> nums;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            nums.push_back(i);
            if (i * i != n) nums.push_back(n / i);
        }
    }

    int answer = 0;
    for (int i = 0; i < nums.size(); i++) {
        answer += nums[i];
    }
    return answer;
}