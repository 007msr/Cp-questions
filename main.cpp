#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int first_index=(-1),last_index=(-1);
        int i;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                first_index=i;
                //cout<<"hello"<<endl;
                break;
            }
        }
         for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                last_index=i;
                break;
            }
        }
       // cout<<first_index<<last_index<<endl;
        if(first_index==(-1) && last_index==(-1))
        {
            cout<<"NO"<<endl;
        }
        else{
        bool flag=true;
        for(i=first_index;i<=last_index;i++)
        {
            if(s[i]=='0')
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag==true)
        cout<<"YES"<<endl;
        }
    }
    return 0;
}
