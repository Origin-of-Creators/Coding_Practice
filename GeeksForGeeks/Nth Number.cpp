//Que: Given a positive integer N. You have to find Nth natural number after removing all the numbers containing digit 9 .
//Source -GeeksforGeeks(30 days of Code)

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
        long long findNth(long long N)
    {
        long long ans = 0;
        long long mul = 1;
        
        while(N)
        {
            ans = ans + (mul*(N%9));
            N = N/9;
            mul = mul * 10;
        }
        return ans;
    }
    };
int main(){
	
		long long n,ans;
		cin>>n;
		Solution obj;
		ans= obj.findNth(n);
		cout<<ans<<endl;
	}
