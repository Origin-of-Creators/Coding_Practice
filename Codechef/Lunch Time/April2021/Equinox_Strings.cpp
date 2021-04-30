// Link to question
// https://www.codechef.com/LTIME95C/problems/EQUINOX
#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,a,b,s=0,an=0;
	    cin>>n>>a>>b;
	    string ar[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>ar[i];
	        if(ar[i][0]=='E'||ar[i][0]=='Q'||ar[i][0]=='U'||ar[i][0]=='I'||ar[i][0]=='N'||ar[i][0]=='O'||ar[i][0]=='X')
	            s+=a;
	        else
	            an+=b;
	    }
	    if(s>an)
	        cout<<"SARTHAK\n";
	    else if(an>s)
	        cout<<"ANURADHA\n";
	    else
	        cout<<"DRAW\n";
	}
	return 0;
}
