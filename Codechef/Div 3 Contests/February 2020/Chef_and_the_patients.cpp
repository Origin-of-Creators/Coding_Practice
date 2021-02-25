#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#define lli long long int
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  
  lli t;
  cin>>t;
  while(t-->0)
  {
      //cout<<t<<endl;
       map<lli,vector<lli>> mp;
      lli n;
      cin>>n;
      priority_queue<lli> q;
      map<lli,vector<lli>>::iterator it;
      for(lli i=0;i<n;i++)
      {
          
           lli z;
          cin>>z;
          
          it=mp.find(z);
         if(it==mp.end())
         {
           q.push(z);
           //cout<<"queue"<<z<<endl;
         }
         
         //cout<<i<<endl;
         mp[z].push_back(i);
        // cout<<"pushed "<<z<<" "<<i<<endl;
      }
      lli count=1;
      vector<lli> arr(n);
      while(!q.empty())
      {
     lli z=q.top();
     for(lli j=0;j<mp[z].size();j++)
     {
      arr[mp[z][j]]=count;
      //cout<<mp[z][j]<<" "<<count<<endl;
      count++;
       
     }
    q.pop();

     }
     for(lli i=0;i<n;i++)
     {
     cout<<arr[i]<<" ";
     }
     cout<<endl;

}
return 0;
}
