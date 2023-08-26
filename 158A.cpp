#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int count = 0;
  int arr[n];
  int mark = 0;
  for(int i = 0; i<n; i++)
  {
    cin >> arr[i];
  }
  mark = arr[k-1];
   for(int i = 0; i<n; i++)
  {
    if(arr[i]==0)
    {
      count == 0;
    }
    else if(arr[i]>= mark)
    {
      count++;
    }
  }
  
  cout << count<< endl;
  return 0;
}