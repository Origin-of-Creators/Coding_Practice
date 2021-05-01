//Link to question
// https://www.codechef.com/FEB21C/problems/MAXFUN/

#include <iostream>
using namespace std;
typedef long long int lli;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    lli n;
	    cin>>n;
	    lli a[n];
	    for(lli i=0;i<n;i++)
	        cin>>a[i];
	    lli mi=a[0],ma=a[0];
	    for(lli i=0;i<n;i++)
	   {
	       if(a[i]<mi)
	        mi=a[i];
	       if(a[i]>ma)
	        ma=a[i];
	   }
	   cout<<2*(ma-mi)<<"\n";
	    
	}
	return 0;
}
