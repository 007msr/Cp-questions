#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,k;
       cin>>n>>m>>k;
       int arr[n];
       int i,j;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int flag1=true,flag2=true;
       for(i=0;i<n && flag1==true;i++)
       {
           if(arr[i]==0)
           {
               flag1=false;
              for(j=0;j<m && flag2==true;j++)
              {
                  if(arr[j]==0)
                  {
                      cout<<0<<endl;
                      flag2=false;
                  }
                  else
                    continue;
              }
              if(j==m && flag2==true)
                cout<<k<<endl;
           }
           else
            continue;
       }
       if(i==n && flag1==true)
        cout<<100<<endl;
    }
    return 0;
}
