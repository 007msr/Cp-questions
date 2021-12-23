#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
 int n,q,i;
 cin>>n;
 int arr[n];
 for( i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int prefixsum[n];
 for(i=0;i<n;i++)
 {
     prefixsum[i]=0;
 }
for( i=0;i<n;i++)
 {
     if(i==0)
        prefixsum[i]=arr[i];
     else
     prefixsum[i]=prefixsum[i-1]+arr[i];
 }
 
 cin>>q;
 
 while(q--)
 {
     int l,r,res;
     cin>>l>>r;
     if(l==0)
    res=prefixsum[r];
     else
      res= prefixsum[r]-prefixsum[l-1];
     cout<<res<<endl;
 
 }
	return 0;
}
 
