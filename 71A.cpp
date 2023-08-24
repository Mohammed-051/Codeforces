#include<bits/stdc++.h>

using namespace std;

int main()
{
  int test_case;
  cin >> test_case;
  string a;
  while(test_case -- !=0)
  {
    cin >> a;
    int l = a.size();
    if(l > 10)
    {
      cout<< a[0] << l-2 << a[l-1] << endl;
    }
    else 
    {
      cout << a << endl;
    }
  }
  return 0;
}