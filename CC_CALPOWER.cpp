#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int size=s.size();
        int i,sum=0;
        for(i=0;i<size;i++)
        {
           // cout<<s[i]<<endl;
         sum+=(i+1)*(s[i]-97+1);
        // cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
	return 0;
}
