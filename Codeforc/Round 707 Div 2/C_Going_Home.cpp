#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <unordered_set>
#include <unordered_map>



using namespace std;
#define lli long long int


//#include <bits/stdc++.h>

int main() {


    struct pair_hash {
    inline std::size_t operator()(const std::pair<lli,lli> & v) const {
        return v.first*61+v.second;
    }
};
unordered_set<pair<lli,lli>,  pair_hash> us;

unordered_map<lli,pair<lli,lli>> sum;
unordered_map<lli,vector<lli>> num;

lli count=0;
lli n;
cin>>n;

vector<lli> arr(n);

for(lli i=0;i<n;i++)
{
    
    cin>>arr[i];
 num[arr[i]].push_back(i+1);

 
}
lli a=-1,b=-1,c=-1,d=-1;
for(auto i: num)
{
    if(i.second.size()>=4)
    {
        cout<<"YES"<<endl;
    for(int j=0;j<4;j++)
    cout<<i.second[j]<<" ";
    cout<<endl;
return 0;
    }
    else
    if(i.second.size()==2)
    {
       if(a<0 && b<0)
       {
          a=i.second[0];
          b=i.second[1];
          //cout<<" num[arr[i]] "<<arr[i]<<endl;
       }

       else{
            // cout<<" num[arr[i]] "<<arr[i]<<endl;
           cout<<"YES"<<endl;
           cout<<a<<" "<<i.second[0]<<" "<<b<<" "<<i.second[1]<<endl;
           return 0;
       }
    }
  // cout<<" here "<<endl;
}




for(lli i=0;i<n-1;i++)
{
    for(lli j=i+1;j<n;j++)
    {
        if(us.find(make_pair(arr[i],arr[j]))==us.end() && us.find(make_pair(arr[j],arr[i]))==us.end())
        {
      us.insert(make_pair(arr[i] , arr[j]));
        lli s=arr[i]+arr[j];
        
        if(sum.find(s)==sum.end())
        sum[s]=make_pair(i+1,j+1);

        else
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<j+1<<" "<<sum[s].first<<" "<<sum[s].second<<endl;
            
            return 0;
        }
        }
         
    }
}

cout<<"NO";
}
