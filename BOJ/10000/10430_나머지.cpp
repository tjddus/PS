#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) % c << "\n";
    cout << ((a % c) + (b % c)) % c << "\n";
    cout << (a * b) % c << "\n";
    cout << ((a % c) * (b % c)) % c << "\n";
}