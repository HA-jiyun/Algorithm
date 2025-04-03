#include <iostream>
#include <string>
using namespace std;

void isRightCalendar(int& dY, int& dM, int& dW);
void isRightDate(int dY, int dM, int dW, string& str);
void whichDay(int dY, int dM, int dW, string str);

int main() {
  int daysInYear, daysInMonth, daysInWeek;
  string date;

  try{
    isRightCalendar(daysInYear, daysInMonth, daysInWeek);
    isRightDate(daysInYear, daysInMonth, daysInWeek, date);
    whichDay(daysInYear, daysInMonth, daysInWeek, date);
  }catch(...){
    cout << -1;
  }
  
  return 0;
}

void isRightCalendar(int& dY, int& dM, int& dW){
  cin >> dY >> dM >> dW;

  if(dY < 1 || dY > 2000){
    throw "exception Y";
  }
  else if(dM < 1 || dM > 200){
    throw "exception M";
  }
  else if(dW < 1 || dW > 26){
    throw "exception W";
  }
  else if(dY < dM){
    throw "exception M > Y";
  }
  else if(dY / dM >= 100){
    throw "exception 100M";
  }
  else if(dY / dM == 99 && dY % dM != 0){
    throw "exception 99+1M";
  }
}
void isRightDate(int dY, int dM, int dW, string& str){
  cin >> str;

  int availableMonth;
  if (dY % dM == 0){
    availableMonth = dY / dM;
  }
  else{
    availableMonth = dY / dM + 1;
  }

  int mm = stoi(str.substr(5,2));
  int yy = stoi(str.substr(8,2));

  if(availableMonth < mm){
    throw "exception date-M";
  }
  else if(dM < yy){
    throw "exception date-D";
  }
}
void whichDay(int dY, int dM, int dW, string str){
  int yyyy = stoi(str.substr(0,4));
  int mm = stoi(str.substr(5,2));
  int dd = stoi(str.substr(8,2));

  int regularMonths = (dY / dM) * (yyyy-1);
  int leapDaysPerYear = dY % dM;
  int leapMonths = leapDaysPerYear * (yyyy-1) / dM;
  int totalDays = dM * (regularMonths + leapMonths + (mm - 1)) + dd;

  int day = totalDays % dW;
  if(day == 0){
    cout << char('A' + (dW - 1));
  }
  else{
    cout << char('A' + (day - 1));
  }
}