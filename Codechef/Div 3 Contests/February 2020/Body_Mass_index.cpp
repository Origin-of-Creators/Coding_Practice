#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
lli t;
cin>>t;
while(t--)
{
lli m,h;
cin>>m>>h;
double calc=(double)m/(h*h);

if(calc<=18)
{
    cout<<1<<endl;
}
else 
if(calc<=24)
{
    cout<<2<<endl;
}
else
if(calc<=29)
{
    cout<<3<<endl;
}
else
{
    cout<<4<<endl;
}

}
}






