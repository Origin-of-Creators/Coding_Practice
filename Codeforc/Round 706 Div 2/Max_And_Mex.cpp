#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <bits/stdc++.h>

using namespace std;
#define lli long long int




int main() {
lli t;
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
cin>>t;
while(t--)
{
   unordered_set<lli> h;
    lli n,k;
    cin>>n>>k;
    lli mx=0,m=0,mex=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        mx=m>mx?m:mx;
    h.insert(m);
    }
lli i=0;
    for( i=0;i<=mx+1;i++)
    {
     if(h.find(i)==h.end())
       {
           mex=i;
           break;

       }
    }
   
   if(mex==(mx+1))
   {
       cout<<h.size()+k<<endl;
       continue;
   }
   if(k>0)
   {
   h.insert((mex+mx+1)/2);
   }
   cout<<h.size()<<endl;
}


}
