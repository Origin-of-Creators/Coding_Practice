#include<bits/stdc++.h>
using namespace std;
// fast input_output
void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int main()
{       
	    file_i_o();    
	    long t;
	    cin>>t;
	    while(t--){
	       long a,b,c,d,k;
	       cin>>a>>b>>c>>d>>k;
	       int ans=abs(c-a)+abs(d-b);
	       if(ans==k) 
	         cout<<"YES";
	       else if(ans>k)
	         cout<<"NO";
	       else if((k-ans)%2==0)
	         cout<<"YES";
	       else
	         cout<<"NO";
	     cout<<endl;
	    }
	return 0;
}
