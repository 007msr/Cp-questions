#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n];
      int i;
      for(i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      int mx=1;
      int c=1;
      sort(arr,arr+n);
      for(i=1;i<n;i++)
      {
          if(arr[i]==arr[i-1])
          {
              c++;
              mx=max(mx,c);
          }
          else
          c=1;
      }
      if(n==mx)
      {
          cout<<0<<endl;
          continue;
      }
      if(mx==1)
      {
          cout<<-1<<endl;
          continue;
      }
      cout<<(n-mx+1)<<endl;
  }
    return 0;
}
