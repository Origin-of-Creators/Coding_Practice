//Link to question
//https://www.codechef.com/LTIME95C/problems/ARRROT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin >> n;
	long long int a[n],sum=0;
	for(int i=0;i<n;i++)
	{
	    cin >> a[i];
	    if(sum+a[i] > 1000000007)
	    sum=sum-1000000007+a[i];
	    else if(sum+a[i] <0)sum=sum+a[i]+1000000007;
	    else sum=sum+a[i];
	}
	long long int q;
	cin >> q;
	long long int x[q];
	for(int i=0;i<q;i++)
	{
	    cin >> x[i];
	    if(2*sum > 1000000007)
	    {sum=sum-1000000007+sum;
	    cout << sum << endl;}
	    else {
	        sum=2*sum;
	        cout << sum << endl;
	    }
	}
	return 0;
}
