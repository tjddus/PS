#include <iostream>
#include <cmath>
using namespace std;

int isPrimeNumber(int n);

int main()
{
    int M, N;
    cin >> M >> N;
    int minPN = 0, sum = 0;

    for (int i = M; i <= N; i++)
    {
        if (i == 1)
            continue;
        if (isPrimeNumber(i) == 1)
        {
            sum += i;
            if (minPN == 0)
            {
                minPN = i;
            }
        }
    }

    if (sum == 0)
        cout << -1 << "\n";
    else
        cout << sum << "\n"
             << minPN << "\n";
    return 0;
}

int isPrimeNumber(int n)
{
    int isPrime = 1;
    if (n % 2)
    {
        for (int i = 2; i <= int(sqrt(n)); i++)
        {
            if (n % i == 0)
                isPrime = 0;
        }
    }else{
        isPrime = 0;
    }
    if (isPrime == 1)
        return 1;
    else
        return 0;
}