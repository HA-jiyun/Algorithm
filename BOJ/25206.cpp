#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string name, grade;
    double credit, total = 0;
    int count = 0;

    vector<string> gradeStr = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
    vector<double> gradeToPoint = { 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0 };


    for (int i = 0; i < 20; i++) {
        cin >> name >> credit >> grade;

        if (grade != "P") {
            auto pos = find(gradeStr.begin(), gradeStr.end(), grade);
            int idx = distance(gradeStr.begin(), pos);

            total += credit * gradeToPoint[idx];
            count += credit;
        }
    }

    cout << total / count;
    return 0;
}