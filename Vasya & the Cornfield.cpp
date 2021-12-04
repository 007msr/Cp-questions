#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,d;
  cin>>n>>d;
  int t;
  cin>>t;
  while(t--)
  {
      int x,y;
      cin>>x>>y;
       if((x+y-d>=0) && (x-y-d)<=0 && (x+y-2*n+d)<=0 && (x-y+d)>=0 )
        cout <<"YES"<<endl;
      else
         cout <<"NO"<<endl;
  }
  return 0;
}
