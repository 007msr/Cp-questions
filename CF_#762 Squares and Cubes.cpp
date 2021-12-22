#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

long long sieve[1007];
int i;
sieve[0]=0;
sieve[1]=0;
for(i=2;i<=1007;i++)
{
    sieve[i]=(i*i*i);
}

    while(t--)
    {
        long long n;
        cin>>n;
        
       int i,j,count=1;

       for(i=2;i*i<=n;i++)
        {
            for(j=2;j<1007;j++)
            {
                if(sieve[j]==(i*i))
                {
                    
                    break;
                }


            }
            if(j==1007)
            {
                count++;
            }

        }
        for(i=2;i*i*i<=n;i++)
        {
            count++;
        }



        cout<<count<<endl;


    }
	return 0;
}
