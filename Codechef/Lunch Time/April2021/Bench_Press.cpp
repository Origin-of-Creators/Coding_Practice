//Link to question
// https://www.codechef.com/LTIME95C/problems/BENCHP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        lli n,w,wr,x;
        cin>>n>>w>>wr;
        vector<lli> ar;
        for(lli i=0;i<n;i++)
        {
            cin>>x;
            ar.push_back(x);
        }
        if(wr>=w)
            cout<<"YES\n";
        else
        {
            sort(ar.begin(),ar.end());
            for(lli i=0;i<n-1;)
            {
                if(ar[i]==ar[i+1])
                {
                    wr=wr+ar[i]+ar[i];
                    i+=2;
                }
                else
                    i++;
            }
            if(wr>=w)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
	return 0;
}
