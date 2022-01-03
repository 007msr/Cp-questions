#include <bits/stdc++.h>
using namespace std;


int main()
{
 long long i,n;
 cin>>n;
 for(i=1;i<=n;i++)
 {

   cout<<((i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)))<<endl;
 }

 return 0;
}
