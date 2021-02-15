#include<iostream>
typedef long long int lli;

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		lli k,d,total=0;
		cin>>n>>k>>d;
		lli ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			total+=ar[i];
		}
		if(k>total)
			cout<<"0"<<"\n";
		else
		{
			int res=total/k>d?d:total/k;
			cout<<res<<"\n";
		}
	}
    return 0;
}
