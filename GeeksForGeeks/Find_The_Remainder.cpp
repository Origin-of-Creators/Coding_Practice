//Que: Given two positive integers A and B, find the reminder when you divide A by B.
//Input:The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.
//Output: For each test case, find the remainder when A is divided by B, and display it in a new line.
//Source: Codechef Hour


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,r;
	cin>>t;
	int arr[t];
  for(int i=0;i<t;i++)
  {  cin>>a>>b;
      r=a%b;
      arr[i]=r;
      a=b=r=0;
  }
    for(int i=0;i<t;i++)
  {
      cout<<arr[i];
      cout<<endl;
  }
	return 0;
}

