#include <iostream>
#include <string>
#include <vector>
using namespace std;

void makeList(int& n_, int& m_, vector<int>& listA, vector<int>& listC, int& count_);
void isNM_valid(int& n_, int& m_, int& count_);
void isAC_valid(int n_, vector<int>& listA, vector<int>& listC, int& count_);
void findMax(int n_, int m_, vector<int> listA, vector<int> listC);

int main() {
  int n, m, count=0;
  vector<int> a_list, c_list;

  makeList(n,m,a_list,c_list,count);
  findMax(n,m,a_list,c_list);

  return 0;
}

void makeList(int& n_, int& m_, vector<int>& listA, vector<int>& listC, int& count_){
  isNM_valid(n_,m_,count_);
  isAC_valid(n_, listA, listC, count_);
}
void isNM_valid(int& n_, int& m_, int& count_){
  cin >> n_;
  cin >> m_;
  count_ = 2;
}
void isAC_valid(int n_, vector<int>& listA, vector<int>& listC, int& count_){
  while(count_ < n_+2){
    int a, c;
    cin >> a >> c;
    listA.push_back(a);
    listC.push_back(c);
    count_++;
  }
}
void findMax(int n_, int m_, vector<int> listA, vector<int> listC){
  vector<int> dp(m_+1,0);

  for(int i = 0; i < n_; i++){
    for(int j = m_; j >= listC[i]; j--){
      dp[j] = max(dp[j], dp[j-listC[i]]+listA[i]);
    }
  }

  cout << dp[m_];
}