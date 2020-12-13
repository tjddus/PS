#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n == 1 || n == 0) 
        return 1;
    return Factorial(n - 1) * n;
}

int main()
{
    int n;
    cin >> n;
    cout << Factorial(n) << "\n";
}