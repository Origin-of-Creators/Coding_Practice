#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
#define lli long long int
int main(){
    lli n,m;
  cin>>n>>m;
  string s,t;
  cin>>s>>t;
  vector<lli> forw(m); 
  vector<lli> back(m); 
  for(lli i=0,j=0;i<n && j<m;i++)
  {
      if(t[j]==s[i])
      {
      forw[j]=i;
      j++;
      }
  }
  for(lli i=n-1,j=m-1;i>0 && j>0;i--)
  {
      if(t[j]==s[i])
      {
      back[j]=i;
      j--;
      }
  }
 lli maxi=0;
for(int i=0;i<m-1;i++)
maxi=max(maxi,back[i+1]-forw[i]);

cout<<maxi;
return 0;
}
