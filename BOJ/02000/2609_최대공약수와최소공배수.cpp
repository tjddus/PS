#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main()
{
    int a, b, gcd;
    cin >> a >> b;
    if(a > b) gcd = GCD(a, b);
    else gcd = GCD(b, a);
    
    cout << gcd << "\n";
    cout << (a * b) / gcd << "\n";
    return 0;
}

// #1 런타임에러
/*
    반례 : 18 29
    처음 짠 코드의 경우 
    29 / 18 = 1 ... 11
    18 / 11 = 1 ... 7
    18 / 7  = 2 ... 4
    18 / 4  = 4 ... 2
    18 / 2  = 9 ... 0
    18 / 2 && 29 / 2 (x) 이후에 나눠야할 수가 0이 되고 0으로 나누니 당연히 런타임 에러
    6 10 
    10 / 6 = 1 ... 4
    6 / 4  = 1 ... 2
    6 / 2  = 1 ... 0
    6 / 2 = 0 && 10 / 2 = 0 이니 이런 문제들은 잘 맞추었다.
*/
