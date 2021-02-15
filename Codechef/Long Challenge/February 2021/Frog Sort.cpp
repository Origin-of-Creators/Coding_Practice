#include<iostream>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int a[n],w[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>w[i];
		if(n==2)
		{
			if(a[0]==1&&a[1]==2)
				cout<<"0"<<"\n";
			else
			{
				if(w[0]>1)
					cout<<"1"<<"\n";
				else
					cout<<"2"<<"\n";
			}
		}
		else if(n==3)
		{
			int temp1,temp2,temp3,w2,w3;
			if(a[0]==1&&a[1]==2&&a[2]==3)
				cout<<"0"<<"\n";
			else
			{
				for(int i=0;i<n;i++)
				{
					if(a[i]==1)
						temp1=i;
					if(a[i]==2){
						temp2=i;
						w2=w[i];
					}
					if(a[i]==3){
						temp3=i;
						w3=w[i];
					}
				}
				while(temp1>=temp2)
				{
					temp2+=w2;
					count++;
				}
				while(temp2>=temp3)
				{
					temp3+=w3;
					count++;
				}
				cout<<count<<"\n";
			}
		}
		else
		{
			int temp1,temp2,temp3,temp4,w2,w3,w4;
			if(a[0]==1&&a[1]==2&&a[2]==3&&a[3]==4)
				cout<<"0"<<"\n";
			else
			{
				for(int i=0;i<n;i++)
				{
					if(a[i]==1)
						temp1=i;
					if(a[i]==2){
						temp2=i;
						w2=w[i];
					}
					if(a[i]==3){
						temp3=i;
						w3=w[i];
					}
					if(a[i]==4){
						temp4=i;
						w4=w[i];
					}
				}
				while(temp1>=temp2)
				{
					temp2+=w2;
					count++;
				}
				while(temp2>=temp3)
				{
					temp3+=w3;
					count++;
				}
				while(temp3>=temp4)
				{
					temp4+=w4;
					count++;
				}
				cout<<count<<"\n";
			}
		}		
	}
    return 0;
}
