#include <iostream>
using namespace std;

// I have 3 ways to solve this problem:

// ---------- Method-1 (by using switch case) ----------

int main()
{
  char ch;

  cout << "Enter any letter you want: ";
  cin >> ch;
  ch = tolower(ch);

  switch (ch)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "Vowel";
    break;

  default:
    cout << "Consonant";
    break;
  }

  return 0;
}

// ---------- Method-2 (by using if else statement) ----------

// int main()
// {
//   char ch;

//   cout << "Enter any letter you want: ";
//   cin >> ch;
//   ch = tolower(ch);

//   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//   {
//     cout << "Vowel";
//   }
//   else
//   {
//     cout << "Consonant";
//   }

//   return 0;
// }

// ---------- Method-3 (by using boolean) ----------

// int main()
// {
//   char vowels[] = {'a', 'e', 'i', 'o', 'u'};
//   char ch;

//   cout << "Enter any letter you want: ";
//   cin >> ch;
//   ch = tolower(ch);

//   bool isVowel = false;

//   for (int i = 0; i < sizeof(vowels); i++)
//   {
//     if (ch == vowels[i])
//     {
//       isVowel = true;
//       break;
//     }
//   }

//   if (isVowel)
//   {
//     cout << "Vowel";
//   }
//   else
//   {
//     cout << "Consonant";
//   }
// }