#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K,num;
        cin >> N >> K;
        int cntp=0,bot=0;
        bool slow=false;
        for (int i = 0; i < N; i++)
        {
            cin >> num;
            if (num > -1)
                cntp++;
            if (num > K)
                slow = true;
            else if (num <= 1 && num>-1)
                bot++;
        }
        if (cntp < ceil((double)N / 2))
            cout << "Rejected\n";
        else if (slow)
            cout << "Too Slow\n";
        else if (bot == N)
            cout << "Bot\n";
        else
            cout << "Accepted\n";
    }
}
