#include <iostream>
using namespace std;
typedef long long int lli;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    lli num,sum=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>num;
	        sum+=num;
	    }
	    if(sum%2==0)
	        cout<<"1"<<"\n";
	    else
	        cout<<"2"<<"\n";
	}
	return 0;
}
