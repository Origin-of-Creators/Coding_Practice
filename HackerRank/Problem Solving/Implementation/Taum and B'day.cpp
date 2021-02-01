#include <bits/stdc++.h>
#include <typeinfo>
typedef unsigned long long int ull;           // We use unsigned long long int datatype and named as ull 
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

 // Complete the 'taumBday' function below.
 
ull taumBday(ull b, ull w, ull bc, ull wc, ull z) { //In this question you have to use long long int data type for value storage
    ull sum=0;
    if((abs(int(bc-wc))>(int)z))
    {
        if(bc>wc)
            sum=wc*(b+w)+z*b;
        else
            sum=bc*(b+w)+z*w;
    }
    else
        sum=bc*b+wc*w;
    return sum;
}

    //Upto here

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        ull b = stoi(first_multiple_input[0]);

        ull w = stoi(first_multiple_input[1]);

        string second_multiple_input_temp;
        getline(cin, second_multiple_input_temp);

        vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

        ull bc = stoi(second_multiple_input[0]);

        ull wc = stoi(second_multiple_input[1]);

        ull z = stoi(second_multiple_input[2]);

        ull result = taumBday(b, w, bc, wc, z);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
