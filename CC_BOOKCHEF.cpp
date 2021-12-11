#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int i;
  vector<int>v;
  int k;
  for(i=0;i<n;i++)
  {
      cin>>k;
      v.push_back(k);
  }
  vector<pair<int,string>>special;
  vector<pair<int,string>>non_special;
  //We are checking whether they are their close friends or not and separating them//
  for(i=0;i<m;i++)
  {
      int f,p;
      string s;
      cin>>f>>p>>s;
      if(find(v.begin(),v.end(),f)!=v.end())
        special.push_back(make_pair(p,s));
      else
        non_special.push_back(make_pair(p,s));

  }
  //Separation done//

  //Sorted both vactor in reverse order//
     sort(special.rbegin(),special.rend());
     sort(non_special.rbegin(),non_special.rend());

     for(int i=0;i<special.size();i++)
     {
         cout<<special[i].second<<endl;
     }
      for(int i=0;i<special.size();i++)
     {
         cout<<non_special[i].second<<endl;
     }
   return 0;
}


