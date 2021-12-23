#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
  string s;
  cin>>s;
  int size=s.size();
  int i,count=1,ans= (-1);
  for(i=1;i<size;i++)
  {
      if(s[i-1]==s[i])
      {
          count++;
 
      }
      else
      {
          ans=max(ans,count);
          count=1;
      }
  }
  //ACCGGGTTTT
  ans=max(ans,count);
  cout<<ans<<endl;
	return 0;
}
