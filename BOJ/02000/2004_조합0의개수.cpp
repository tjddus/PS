#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m = 0;
    cin >> n >> m;

    if (m > n / 2)
        m = n - m;

    long long a5, b5, c5, a2, b2, c2, res5 = 0, res2 = 0;
    for (int i = 1; i <= 13; i++)
    {
        if (n < pow(5, i))
            break;
        a5 = n / pow(5, i);
        b5 = (n - m) / pow(5, i);
        c5 = m / pow(5, i);
        res5 = res5 + a5 - b5 - c5;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (n < pow(2, i))
            break;
        a2 = n / pow(2, i);
        b2 = (n - m) / pow(2, i);
        c2 = m / pow(2, i);
        res2 = res2 + a2 - b2 - c2;
    }

    if (res5 < res2)
        cout << res5 << "\n";
    else
        cout << res2 << "\n";
    return 0;
}
