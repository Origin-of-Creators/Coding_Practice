#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define w(t) int t; cin>>t; while(t--)

#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
	{
		ll group,p,x[10],sum=0,maxi,mini;
		cin>>group>>p;
		for(ll i=0;i<10;i++)
		{
			cin>>x[i];
		}
		for(ll i=9;i>=group;i--)
		{
			sum+=x[i];
		}
		mini=sum/p+1;
		ll sum1=sum+x[group-1];
		maxi=sum1/p;
		if(sum1%p>0)
		{
			maxi++;
		}
		cout<<mini<<" "<<maxi<<endl;
	}
}
