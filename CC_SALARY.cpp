#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

     int n;
     cin>>n;
     int arr[n];
     int i;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
    int min=arr[0],sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            sum+=arr[i];
        }
        else
        {
            sum+=arr[i];
        }
    }
    cout<<(sum-n*min)<<endl;
    }
    return 0;
}
