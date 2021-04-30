// Link to question
// https://www.codechef.com/LTIME95C/problems/CCHEAVEN
#include <iostream>
using namespace std;
typedef long int li;
int main() {
	// your code goes here
	li t;
	float res=0.0;
	cin>>t;
	while(t--)
	{
	    li l,sum=0;
	    cin>>l;
	    string s;
	    cin>>s;
	    for(li i=0;i<l;i++)
		{
		    if(s[i]=='1')
		        sum+=1;
		    else
		        sum+=0;
		    res=(float)sum/(i+1);
		    if(res>=0.5)
		        break;
		}
		if(res>=0.5)
		    cout<<"YES\n";
		else
		    cout<<"NO\n";
	}
	return 0;
}

 
