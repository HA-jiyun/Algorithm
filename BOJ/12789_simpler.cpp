#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    stack<int> stk;
    int cnt = 1;
    while (N--) {
        int n;
        cin >> n;

        stk.push(n);
        while (!stk.empty() && stk.top() == cnt) {
            stk.pop();
            cnt++;
        }
    }

    if (stk.empty())
        cout << "Nice";
    else
        cout << "Sad";
    
    return 0;
}