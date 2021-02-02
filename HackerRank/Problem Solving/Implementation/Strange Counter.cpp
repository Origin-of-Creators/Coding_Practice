#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long cycle=3,cycles=3,res;
    while(t>cycles)
    {
        cycle=2*cycle;
        cycles+=cycle;
    }
    res=(cycles-t+1);
    return res;
}
    //Upto here


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
