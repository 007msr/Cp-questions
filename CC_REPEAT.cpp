#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s;
        cin>>n>>k>>s;
        int sum_of_terms= (n*(2+(n-1)*2))/2;
       // cout<<sum_of_terms<<endl;
        int rem=s-sum_of_terms;
        int result= rem/(k-1);
        cout<<result<<endl;
    }
	return 0;
}
