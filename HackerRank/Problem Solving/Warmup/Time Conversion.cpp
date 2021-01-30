#include <bits/stdc++.h>

using namespace std;


// Complete the timeConversion function only
string timeConversion(string s) {
      
     string res="";
     if(s[8]=='P')
     {
        if(s[0]=='1'&&s[1]=='2')
        {
            for(int i=0;i<8;i++)
                res+=s[i];
        }
        else
        {
            int temp=stoi(s);       //stoi function- To convert string to integer(Check it out)
            temp+=12;
            res=to_string(temp);
            for(int i=2;i<8;i++)
                res+=s[i];
        }
     }
     else if(s[8]=='A'&&s[0]=='1'&&s[1]=='2')
     {
        res='0';
        res+='0';
        for(int i=2;i<8;i++)
            res+=s[i];
     }
    else
    {
        for(int i=0;i<8;i++)
            res+=s[i];
    }
     return res;
}

    //Upto here

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
