#include <iostream>
using namespace std;

bool checkprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 2; i < n; i++)
    {
        bool isPrime = checkprime(i);
        if (isPrime)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}