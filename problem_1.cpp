#include <iostream>
using namespace std;

int main()
{
  double time;

  cout << "Enter the time in the form below (00.43, 12.01 or 16.10) if you want enter like this (12, 1 or 19) feel free: ";
  cin >> time;

  if (time >= 00.00 && time <= 11.59)
  {
    cout << "AM";
  }
  else if (time >= 12 && time <= 23.59)
  {
    cout << "PM";
  }
  else
  {
    cout << "Enter the correct time!";
  }

  return 0;
}