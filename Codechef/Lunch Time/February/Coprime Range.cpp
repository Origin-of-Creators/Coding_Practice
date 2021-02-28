#include <iostream>
typedef long int li;
using namespace std;

bool isPrime(li n)
{ 
    if (n <= 1)  
        return false;
    if (n <= 3)  
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    for (li i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

li nextPrime(li N)
{
    if (N <= 1)
        return 2;
    li prime = N;
    bool found = false;
    while (!found) 
    {
        prime++;

        if (isPrime(prime))
            found = true;
    }
    return prime;
}
int main()
{
    li t;
    cin >> t;
    while (t--)
    {
        li l, r, i, x, y;
        li flag = 0;
        cin >> l >> r;
        cout << nextPrime(r) << "\n";
    }
}
