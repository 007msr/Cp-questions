#include <bits/stdc++.h>
using namespace std;

//code can be imprived definately//
int main()
{
  int n;
  cin>>n;
  int arr[n];
  int i;
  if(n==2 || n==3)
    cout<<"NO SOLUTION"<<endl;
  else if(n==4)
  {
      for(i=0;i<(n/2);i++)
     {
         if(i==0)
         {
             arr[i]=2;
         }
         else
            arr[i]=arr[i-1]+2;
     }
     for(i=((n/2));i<n;i++)
     {
         if(i==((n/2)))
         {
             arr[i]=1;
         }
         else
            arr[i]=arr[i-1]+2;
     }
     for(i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  }
  else
  {
     if(n%2==0)
  {
     for(i=0;i<(n/2);i++)
     {
         if(i==0)
         {
             arr[i]=1;
         }
         else
            arr[i]=arr[i-1]+2;
     }
     for(i=((n/2));i<n;i++)
     {
         if(i==((n/2)))
         {
             arr[i]=2;
         }
         else
            arr[i]=arr[i-1]+2;
     }

  }
  else
  {

     for(i=0;i<=(n/2);i++)
     {
         if(i==0)
         {
             arr[i]=1;
         }
         else
            arr[i]=arr[i-1]+2;
     }
     for(i=((n/2)+1);i<n;i++)
     {
         if(i==((n/2)+1))
         {
             arr[i]=2;
         }
         else
            arr[i]=arr[i-1]+2;
     }

  }
  for(i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
  }


 return 0;
}
