#include<bits/stdc++.h>

using namespace std;

int main()
{
  double n,m,a;

  cin >> n >> m >> a;
  
  long long int length = ceil(n/a);
  long long int width = ceil (m/a);
  long long int total = length * width;

  cout << total << endl ;
  return 0;
}