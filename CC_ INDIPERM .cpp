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

    int i;

    int res[n];
    res[0]=n;
    for(i=1;i<n;i++)
    {
        res[i]=i;
    }
    for(i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

  }
   return 0;
}
