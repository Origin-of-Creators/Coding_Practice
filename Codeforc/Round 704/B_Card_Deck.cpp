#include<iostream>
using namespace std;
#define lli long long int
#include <vector>
#include <stack>
int main()
{
lli t;
cin>>t;
while(t-->0)
{
    
    lli n;
    cin>>n;
    vector<lli> input(n);
    vector<lli> output;
    vector<bool> used(n+1);
     for(lli i=0;i<n;i++)
     cin>>input[i];
     
    lli present=n;
    for(lli i=1;i<=n;i++)
    used[i]=0;
    stack<lli> s;
    for(lli i=n-1;i>=0;i--)
    {
        used[input[i]]=1;
        s.push(input[i]);
        if(input[i]==present)
        {
            while(!s.empty())
            {
         output.push_back(s.top());
         s.pop();
            }
        while(used[--present])
        {

        }
        }

    }
    for(lli i=0;i<n;i++)
    cout<<output[i]<<" ";
    cout<<endl;
}
return 0;
}
