#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
#define lli long long int


//#include <bits/stdc++.h>

int main() {

lli t;
cin>> t;
while(t--)
{
    lli n;
    cin>>n;
    vector<lli> vec(n+1);
    for(lli i=0;i<=n;i++)
    vec[i]=0;
    vector<lli> arr(n+1);
    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(lli i=n-1;i>=0;i--)
    {
      if(i-arr[i]>=0)
      {
      vec[i-arr[i]+1]+=1;
      
      }
      else{
       vec[0]+=1;
      }
      vec[i+1]-=1;
    }
 int result=0;
    for(lli i=0;i<n;i++)
    {
     result+=vec[i];
     if(result>0)
     cout<<1<<" ";
     else
     cout<<0<<" ";


    }
    cout<<endl;
}


}
