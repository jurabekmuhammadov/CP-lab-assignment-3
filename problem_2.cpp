#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter any number from 0 till googolplex: ";
  cin >> n;

  if (n % 2 != 0)
  {
    cout << n + 1;
  }
  else
  {
    cout << "Even";
  }

  return 0;
}