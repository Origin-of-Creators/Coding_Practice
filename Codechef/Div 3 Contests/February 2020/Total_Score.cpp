#include <iostream>
#include <algorithm>
#include <vector>
#define lli long long int
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
lli t;
cin>>t;
while(t--)
{
    lli N,K;
    cin>>N>>K;
    lli Z=N;
    vector<lli> arr(K);
    for(lli i=0;i<K;i++)
    {
    cin>>arr[i];
    }
    while(Z--)
    {
    string A;
    cin>>A;
    lli sum=0;
    for(lli i=0;i<K;i++)
    {
       if(A[i]-'0') 
        sum+=arr[i];
       
    }
    cout<<sum<<endl;
    }
}
}
