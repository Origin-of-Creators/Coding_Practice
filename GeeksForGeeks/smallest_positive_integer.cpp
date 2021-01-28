//Que: Given an array of size N, find the smallest positive integer value that cannot be represented as sum of some elements from the array
//Source -GeeksforGeeks(30 days of Code
#include<bits/stdc++.h>
using namespace std;

class Solution
{   
public:
    long long smallestpositive(vector<long long> arr, int n)
    { 
       sort(arr.begin(), arr.end()); //Inbuilt Function to sort the array
long long int res = 1;


for (int i = 0; i < n && arr[i] <= res; i++)
res = res + arr[i];

return res;
} };
int main()
{
		int n,ans;
		
		cin>>n;
		vector<long long> array(n);
		for(int i=0;i<n;i++)
		{ cin>>array[i];
		}
		Solution obj;
		ans= obj.smallestpositive(array,n);
		cout<<ans<<endl;
	}

