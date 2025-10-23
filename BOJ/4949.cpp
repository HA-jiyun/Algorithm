#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    while (1) {
        string s;
        stack<char> stk;

        char ch;
        bool ans = true;

        while (cin.get(ch)) {
            if (ch == '.') break;
            if (ch == '\n') continue;
            s += ch;

            if (ch == '(' || ch == '[')
                stk.push(ch);
            else if (ch == ')') {
                if (!stk.empty() && stk.top() == '(')
                    stk.pop();
                else 
                    ans = false;
                
            }
            else if (ch == ']') {
                if (!stk.empty() && stk.top() == '[')
                    stk.pop();
                else
                    ans = false;
                
            }
        }

        if (s.empty()) break;
        if (!stk.empty()) ans = false;

        if (ans == true)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    
    return 0;
}