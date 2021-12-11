#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int arr[n];
      int i;
      for(i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      int sum=0;
      vector<int>v;
      int negative_sum=0;
      for(i=0;i<n;i++)
      {
          if(arr[i]>0)
            sum+=arr[i];
          else
            v.push_back(arr[i]);
      }
      sort(v.begin(),v.end());
      if(k==0)
      cout<<0<<endl;
      else
      {
          if(v.size()==0)
            cout<<sum<<endl;
          else
          {
              for(i=0;i<k;i++)
              {
                  negative_sum+=((-1)*v[i]);
              }
              cout<<(sum+negative_sum)<<endl;
          }
      }


  }
    return 0;
}
