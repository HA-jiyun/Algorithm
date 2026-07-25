#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> cards) {
    vector<bool> opened(cards.size(), false);
    vector<vector<int>> groups;

    for (int i = 0; i < cards.size(); i++) {
        if (opened[i])
            continue;

        int idx = i;
        vector<int> group;
        while (!opened[idx]) {
            opened[idx] = true;
            group.push_back(idx);
            idx = cards[idx] - 1;
        }
        groups.push_back(group);
    }

    int answer = 0;
    if (groups.size() > 1) {
        sort(groups.begin(), groups.end(), [](const vector<int>& a, const vector<int>& b) {
            return a.size() > b.size();
            });
        answer = groups[0].size() * groups[1].size();
    }

    return answer;
}