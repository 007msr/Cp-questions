#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,p,x,y,sum=0;
       cin>>n>>p>>x>>y;
       int arr[n];
       int i;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       for(i=0;i<(p);i++)
       {
           if(arr[i]==0)
            sum+=x;
           else
            sum+=y;
       }
       cout<<sum<<endl;

    }
    return 0;
}
