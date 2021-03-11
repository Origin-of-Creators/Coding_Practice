#include <iostream>
#include <string>
using namespace std;

#define lli long long int
string revers(string a,string str)
{
    string b;
    for(int i=a.length()-1;i>=0;i--)
    {
     b+=a[i];
    }
    if(b==str)
    return "YES";
    return "NO";
}

int main() {
lli t;
cin>>t;
while(t--)
{
    lli a,k;
    cin>>a>>k;
    string s;
    cin>>s;
   
    lli num=(a-1)/2;
    if(k>num)
    {
   std:: cout<<"NO"<<endl;
    continue;
    }
    if(k==0)
    {
    std:: cout<<"YES"<<endl;
    continue;
    }
   // cout<<s.substr(0,num)<<s.substr(num+1)<<endl;
   if(a==1)
   {
       std:: cout<<"NO"<<endl;
       continue;
   }
 // std:: cout<< s.substr(0,k)<<s.substr(a-k)<<endl;
    std:: cout<<revers(s.substr(0,k),s.substr(a-k))<<endl;
}


}
