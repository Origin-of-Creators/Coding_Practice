#include <bits/stdc++.h>

using namespace std;


// Complete the timeConversion function only
string timeConversion(string s) 
{
    string hours= s.substr(0,2);
    int hour=stoi(hours);
    size_t pos=s.find("PM");
    if(pos!=string::npos)
    {
        if(hour+12<24)
        {
            hours=to_string(hour+12);
        }
    }
    else 
        if(hour==12)
        {
            hours="00";
        }
    
    return s.replace(0,2,hours).erase(s.size()-2);
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
