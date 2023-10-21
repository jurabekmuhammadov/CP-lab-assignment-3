#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter any number: ";
  cin >> n;

  if (n % 3 == 0 && n % 4 == 0)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }

  return 0;
}