#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C, D, Bdigit = 0, Ddigit = 0, Bmod, Dmod;
    long long res;
    cin >> A >> B >> C >> D;
    Bmod = B;
    Dmod = D;

    while (Bmod != 0)
    {
        Bmod = Bmod / 10;
        Bdigit++;
    }

    while (Dmod != 0)
    {
        Dmod = Dmod / 10;
        Ddigit++;
    }

    res = A * pow(10, Bdigit) + B + C * pow(10, Ddigit) + D ;
    cout << res << "\n";
    return 0;
}
