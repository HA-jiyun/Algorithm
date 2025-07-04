#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int m = 1;
    while (m < N) {
        int sum = m;
        string m_str = to_string(m);
        for (int i = 0; i < m_str.size(); i++)
            sum += m_str[i] - '0';

        if (sum == N)
            break;
        m++;
    }
    
    if(m == N)
        m = 0;
    
    cout << m;
    return 0; 
}