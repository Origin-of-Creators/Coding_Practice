#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main() {
	// your code goes here
	lli t;
	cin>>t;
	while(t--)
	{
	    lli n,x,sum=0;
	    cin>>n;
	    vector<lli> ar;
	    for(lli i=0;i<n;i++)
	    {
	       cin>>x;
	       ar.push_back(x);
	    }
	    x=0;
	    sort(ar.begin(),ar.end());
	    for(lli i=0;i<n;i++)
	    {
	        if(ar[i]>i+1)
	        {
	            x=1;
	            break;
	        }
	        else
	        {
	            sum+=(i+1-ar[i]);
	        }
	    }
	    if(x)
	        cout<<"Second\n";
	    else if(sum%2==0)
	        cout<<"Second\n";
	    else
	        cout<<"First\n";
	    
	}
	return 0;
}
