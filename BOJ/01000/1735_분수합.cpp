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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int gcd = GCD(b, d);
    int lcd = (b / gcd) * d;

    int top = a * (lcd / b) + c * (lcd / d);
    int down = lcd;

    cout << top / GCD(top, down) << " " << down / GCD(top, down);



    return 0;
}