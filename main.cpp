#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,d;
   cin>>n>>d;
   int arr[n];
   int i,count=0;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   for(i=0;i<n;i++)
   {
       if(arr[i+1]-arr[i]<=d)
       {
           count++;
           i++;
       }

   }
   cout<<count<<endl;
    return 0;
}
