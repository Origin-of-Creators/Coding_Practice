#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void replaceAll(string& str, const string& fstr, const string& tstr) 
{
    if(fstr.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(fstr, start_pos)) !=string::npos) 
    {
        str.replace(start_pos, fstr.length(), tstr);
        start_pos += tstr.length(); 
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str;
        cin>>s;
        replaceAll(s,"party","pawri");
        cout<<s<<endl;
    }
}

