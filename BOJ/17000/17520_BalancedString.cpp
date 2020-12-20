#include <iostream>
using namespace std;

#define MOD 16769023
long long a[100001][2];
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    a[1][0] = a[1][1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a[i][0] = (a[i - 1][1]) % MOD;
            a[i][1] = (a[i - 1][0]) % MOD;
        }
        else
        {
            a[i][0] = (a[i - 1][0] + a[i - 1][1]) % MOD;
            a[i][1] = (a[i - 1][0] + a[i - 1][1]) % MOD;
        }
    }
    cout << (a[n][0] + a[n][1]) % MOD << "\n";

    return 0;
}