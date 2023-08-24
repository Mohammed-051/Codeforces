#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  cin >> a;
  int length = a.length();
  int count = 0;

  for (auto &x : a)
  {
    x = tolower(x);
  }

  char vowel[] = {'a', 'e', 'i', 'o', 'u', 'y'};
  string final = "";

  for (int i = 0; i < length; i++)
  {
    int j = 0;
    if (a[i] != vowel[0] && a[i] != vowel[1] && a[i] != vowel[2] && a[i] != vowel[3] && a[i] != vowel[4] && a[i] != vowel[5])
    {
      final += a[i];
    }
    else
    {
      count++;
    }
    j++;
  }
  int length2 = final.size();
  for (int i = 0; i < length2; i++)
  {
    cout << "." << final[i];
  }
  cout << endl;

  return 0;
}