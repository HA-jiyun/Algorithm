#include <iostream>
using namespace std;

int main() {
    // 기존 시간을 분 단위로 전환하여 연산하는 방법
    // 제출번호 90313511 참고
    int h, m, c;
    cin >> h >> m >> c;

    int toMinute = (h * 60 + m) + c;
    int h_c = (toMinute / 60) % 24;
    int m_c = toMinute % 60;

    cout << h_c << " " << m_c;
}