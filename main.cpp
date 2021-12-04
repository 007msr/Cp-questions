#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  if(x>y)
 {
     if(z<(x-y))
        cout<<"+"<<endl;
     else
        cout<<"?"<<endl;
 }
 else if(x<y)
 {
     if(z<(y-x))
        cout<<"-"<<endl;
     else
        cout<<"?"<<endl;
 }
    else if(x==y)
    {
        if(z==0)
        cout<<"0"<<endl;
        else
        cout<<"?"<<endl;
    }


  return 0;
}
