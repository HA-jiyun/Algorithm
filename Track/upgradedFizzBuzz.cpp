#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printInvalid(bool invalidTF);
void makeList(vector<int>& listA, vector<string>& listS, int& n);
void isA_valid(string rawStr, int sepIndex, vector<int>& listA);
void isS_valid(string rawStr, int sepIndex, vector<string>& listS);
void isAS_valid(vector<int> listA, vector<string> listS);
void isN_valid(string n_str, int& n_int);
void findMax(vector<int> listA, vector<string> listS, int n);

int main() {
    bool invalid = 0;
    vector<int> a_list;
    vector<string> s_list;
    int num;
    
    try {
        makeList(a_list, s_list, num);
        findMax(a_list, s_list, num);
    }
    catch (...) {
        invalid = 1;
    }

    printInvalid(invalid);
    return 0;
}

void printInvalid(bool invalidTF) {
    if (invalidTF == true) {
        cout << "invalid input";
    }
    return;
}
void makeList(vector<int>& listA, vector<string>& listS, int& n) {
    int m = 0;
    bool inputN = false;

    while (m < 5) {
        string str;
        cin >> str;

        int sepPos = 0;
        if (str.find(":") == string::npos) {
            isN_valid(str, n);
            inputN = true;
            break;
        }
        else {
            sepPos = str.find(":");
        }

        isA_valid(str, sepPos, listA);
        isS_valid(str, sepPos, listS);
        m++;
    }

    if (inputN == false) {
        string str;
        cin >> str;
        isN_valid(str, n);
    }

    isAS_valid(listA, listS);
}
void isA_valid(string rawStr, int sepIndex, vector<int>& listA) {
    string a_str = rawStr.substr(0, sepIndex);
    if (a_str[0] == '0') {
      throw "exception A1";
    }
    else if(a_str.find(' ') != string::npos){
      throw "exception A2";
    }
    else if(a_str == ""){
      throw "exception A3";
    }

    int a = stoi(a_str);

    if (a < 1 || a > 100) {
        throw "exception A4";
    }

    listA.push_back(a);
}
void isS_valid(string rawStr, int sepIndex, vector<string>& listS) {
    string s = rawStr.substr(sepIndex + 1);

    if (s.find(":") != string::npos) {
        throw "exception S1";
    }
    else if(s.find(' ') != string::npos){
      throw "exception S2";
    }
    else if (s.length() > 50) {
        throw "exception S3";
    }
    else if(s == ""){
      throw "exception S4";
    }

    listS.push_back(s);
}
void isAS_valid(vector<int> listA, vector<string> listS) {
    if (listA.size() == 0 || listS.size() == 0) {
        throw "exception AS";
    }
    for (int i = 0; i < listA.size(); i++) {
        for (int j = 0; j < listA.size(); j++) {
            if (i != j && listA[i] == listA[j]) {
                throw "exception A list";
            }
        }
    }
    for (int i = 0; i < listS.size(); i++) {
        for (int j = 0; j < listS.size(); j++) {
            if (i != j && listS[i] == listS[j]) {
                throw "exception S list";
            }
        }
    }
}
void isN_valid(string n_str, int& n_int) {
    if (n_str[0] == '0') {
        throw "exception N1";
    }
    else if (n_str.find(".") != string::npos) {
        throw "exception N2";
    }
    else {
        n_int = stoi(n_str);
        if (n_int < 1 || n_int > 10000000) {
            throw "exception N3";
        }
    }
}
void findMax(vector<int> listA, vector<string> listS, int n) {
    int max = 0, max_idx = 0;
    for (int i = 0; i < listA.size(); i++) {
        if (n % listA[i] == 0) {
            if (listA[i] > max) {
                max = listA[i];
                max_idx = i;
            }
        }
    }

    if (max == 0) {
        cout << n;
    }
    else {
        cout << listS[max_idx];
    }
}