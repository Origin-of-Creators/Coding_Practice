#include<iostream>
using namespace std;
typedef long int li;

int main()
{
	li t;
	cin>>t;
	while(t--)
	{
		int d,c,x,y,z,u,v,w,d1,d2;
		cin>>d>>c;
		cin>>x>>y>>z;
		cin>>u>>v>>w;
		d1=x+y+z;
		d2=u+v+w;
		if(d1>=150&&d2>=150)
		    if(d1+d2+c<d1+d2+d+d)
			    cout<<"YES\n";
		    else
			    cout<<"NO\n";
	    else if(d1>=150&&d2<150)
	        if(d1+d2+c+d<d1+d2+d+d)
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	    else if(d1<150&&d2>=150)
	        if(d1+d2+c+d<d1+d2+d+d)
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	    else
	        if(d1+d2+c+d+d<d1+d2+d+d)
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	        
	    
	}
	

    return 0;
}
