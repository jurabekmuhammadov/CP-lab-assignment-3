#include <iostream>
using namespace std;

int main()
{
  double n1, n2;

  cout << "Enter the first number: ";
  cin >> n1;
  cout << "Enter the second number: ";
  cin >> n2;

  if (n1 == n2)
  {
    cout << "Equal";
  }
  else if (n1 > n2)
  {
    cout << "The biggest number is " << n1;
  }
  else
  {
    cout << "Thee biggest number is " << n2;
  }

  return 0;
}