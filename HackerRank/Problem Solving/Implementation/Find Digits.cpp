#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.

int findDigits(int n) {
    int count=0,num=n;
    while(num!=0)
    {
        int temp=num%10;
        if(temp!=0&&n%temp==0)
           count++;
        num/=10;
    }
    return count;
}
  
    //Upto here

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
