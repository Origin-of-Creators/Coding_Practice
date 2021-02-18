#include <bits/stdc++.h>
typedef unsigned long long int ull;
using namespace std;

// Complete the repeatedString function below.

ull repeatedString(string s, ull n) {
    ull x=n%s.size(),count=0;
    for(ull i=0;i<s.size();i++)
        if(s[i]=='a')
            count+=1;
    count=count*(n/s.size());
    for(ull i=0;i<x;i++)
        if(s[i]=='a')
            count+=1;
    return count;

}
    //Upto here
    
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    ull n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    ull result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
