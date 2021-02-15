#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int t=0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool upper = false;
        bool lower = false;
        bool symbol = false;
        bool digit = false;
        int length = s.length();
        if (s.length() >= 10)
        {
            if (s[0] >= 97 && s[0] <= 122)
                lower = true;
            if (s[length - 1] >= 97 && s[length - 1] <= 122)
                lower = true;
            for (int i=1; i < length-1; i++)
            {
                //cout << (int)s[i]<<endl;
                if ((int)s[i] >= 65 && (int)s[i] <= 90)
                    upper = true;
                if ((int)s[i] >= 48 && (int)s[i] <= 57)
                    digit = true;
                if ((int)s[i] == 35 || (int)s[i] == 37 || (int)s[i] == 38 || (int)s[i] == 63|| (int)s[i] == 64)
                    symbol = true;
                if ((int)s[i] >= 97 && (int)s[i] <= 122)
                    lower = true;
            }
            //cout << upper << lower << symbol << digit<<endl;
            if (upper && digit && symbol && lower)
                cout << "YES\n";
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}

