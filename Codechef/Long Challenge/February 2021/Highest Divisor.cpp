#include<iostream>
using namespace std;

int main()
{
	int n,res=1;
	cin>>n;
	for(int i=2;i<=10;i++)
	{
		if(n%i==0)
			res=i;
	}
	cout<<res<<"\n";
    return 0;
}
