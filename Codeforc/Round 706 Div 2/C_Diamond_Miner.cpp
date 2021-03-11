#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
#define lli long long int


//#include <bits/stdc++.h>

int main() {
   
lli t;

cin>>t;
while(t--)
{

    lli n;
  cin>>n;
  vector<lli> a;
   vector<lli> b;
   
  for(int i=0;i<2*n;i++)
  {
      lli k,l;
      cin>>k>>l;
      if(k==0)
      {
        a.push_back( abs(l));
         

      }
      else
      {
       
    b.push_back( abs(k));
      }
  }
sort(a.begin(),a.end());
sort(b.begin(),b.end());
double resu=0;
  cout<< fixed << setprecision(10)  ;
for(lli i=0;i<n;i++)
{
    double x=a[i]*a[i]
;
double y=b[i]*b[i];
   resu+= sqrt(x+y);
}
cout<< fixed<<setprecision(10)<<resu<<endl;

}


}
