#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   long long n;
   cin>>n;
   long long expected_sum= (n*(n+1))/2;
   int arr[n-1];
   for(int i=0;i<(n-1);i++)
   {
       cin>>arr[i];
   }
   long long sum=0;
   for(int i=0;i<(n-1);i++)
   {
       sum+=arr[i];
   }
   cout<<(expected_sum-sum)<<endl;
	return 0;
}
