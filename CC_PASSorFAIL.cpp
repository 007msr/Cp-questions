#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,x,p;
     cin>>n>>x>>p;
     if((3*x+(-1)*(n-x))>=p)
        cout<<"PASS"<<endl;
     else
        cout<<"FAIL"<<endl;
    }
    return 0;
}
