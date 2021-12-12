#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t ;
  cin>>t;
  while(t--)
  {
   int n;
   cin>>n;
   vector<int>a;
   int i;
   for(i=0;i<n;i++)
   {
       int k;
       cin>>k;
       a.push_back(k);
   }
   map<int,int>freq;
   long long int ans=1;
   long long int mod=1e9+7;
   for(i=0;i<n;i++)
   {
       freq[a[i]]++;
   }
   for(auto pii : freq)
   {
       int f=pii.second;
       ans*=(f+1);
       ans=ans%mod;
   }
   ans--;
   
   cout<<ans<<endl;
  }
   return 0;
}
