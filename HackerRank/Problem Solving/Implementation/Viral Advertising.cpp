#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.

int viralAdvertising(int n) {
    int count=0,share=5,likes;
    for(int i=0;i<n;i++)
    {
        likes=share/2;
        count+=likes;
        share=likes*3;
    }
    return count;
}
    //Upto here

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
