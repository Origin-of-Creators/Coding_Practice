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
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    vector<lli> a(n+1);
    vector<lli> b(n+1);
    a[0]=0;
    b[0]=0;
    vector<lli> tm(n);
    for(lli i=1;i<=n;i++)
    {
     cin>>a[i]>>b[i];
    }
    for(lli i=0;i<n;i++)
    {
        cin>>tm[i];
    }
    lli arrival=0,leave=0;
for(int i=1;i<=n;i++)
{
arrival=leave+a[i]-b[i-1]+tm[i-1];
//cout<<"arrived "<<i<<" at "<<arrival<<endl;
leave=(b[i]-a[i]+1)/2+arrival;
//cout<<b[i]<<" "<<a[i]<<endl;
//cout<<"left "<<i<<" at "<<leave<<endl;
if(leave <b[i])
leave=b[i];
}
cout<<arrival<<endl;
}


}
