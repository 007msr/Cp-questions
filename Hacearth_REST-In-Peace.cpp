#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        bool flag=true;
        cin>>n;
        if(n%21==0)
            cout<<"The streak is broken!"<<endl;
        else {
            while(n>0 && flag!=false)
            {
                int last_digit=n%10;
                n=n/10;
                int second_lastdigit=n%10;
                if(second_lastdigit*10+last_digit==21)
                {
                     cout<<"The streak is broken!"<<endl;
                     flag=false;

                }
                else
                    continue;
            }
            if(flag==true)
                cout<<"The streak lives still in our heart!"<<endl;

        }


    }
    return 0;
}
