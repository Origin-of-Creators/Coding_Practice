#include<iostream>
using namespace std;
#define lli long long int
#include <algorithm>
int main()
{
 lli t;
 cin>>t;
 while(t-->0)
 {
  lli q,a,b,c;
  cin>>q>>a>>b>>c;
  lli n,m,o;
  n=(q/a+1)*a-q;
  m=(q/b+1)*b-q;
  o=(q/c+1)*c-q;
  if(q%a==0 ||q%b==0 || q%c==0 )
  {
  cout<<0<<endl;
  continue;
  }
 cout<<min(o,min(m,n))<<endl;

  
 }
}
