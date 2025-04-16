#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, count=0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        vector<char> vec;
        vec.push_back(str[0]);

        for (int j = 1; j < str.size(); j++) {
            if (str[j] != str[j-1]) {
                vec.push_back(str[j]);
            }
        }

        int originalLength = vec.size();

        sort(vec.begin(), vec.end());
        auto newEnd = unique(vec.begin(), vec.end());
        if(newEnd != vec.end())
            vec.erase(newEnd, vec.end());

        int revisedLength = vec.size();

        if (originalLength == revisedLength)
            count++;
    }

    cout << count;
    return 0;
}