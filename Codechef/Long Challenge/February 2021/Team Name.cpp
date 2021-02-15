#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
typedef unsigned long int ul;

ul count(vector<char> x,vector<char> y)
{
	set <char> s(x.begin(),x.end());
	ul temp=0;
	for(auto i:y)
	{
		if(s.find(i)!=s.end())
			temp++;
	}
	return temp;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ul n;
		cin>>n;
		map<string,vector<char>> check;
		string name;
		for(ul i=0;i<n;i++)
		{
			cin>>name;
			check[name.substr(1)].push_back(name[0]);
		}
		ul value=0;
		for(auto i:check)
		{
			for(auto j:check)
			{
				if(i.first!=j.first)
				{
					ul temp=count(i.second,j.second);
					value+=(i.second.size()-temp)*(j.second.size()-temp);
				}
			}
		}
		cout<<value<<endl;
	}
}
