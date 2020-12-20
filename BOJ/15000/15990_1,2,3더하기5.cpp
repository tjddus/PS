#include <iostream>
#include <cstring>
using namespace std;

#define MOD 1000000009
long long a[4][100000], result;
int T, n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    memset(a, 0, sizeof(a));
    a[1][1] = a[2][2] = a[1][3] = a[2][3] = a[3][3] = 1;
    for (int i = 4; i <= 100000; i++)
    {
        if (a[1][i] + a[2][i] + a[3][i] == 0)
        {
            a[1][i] = (a[2][i - 1] + a[3][i - 1]) % MOD;
            a[2][i] = (a[1][i - 2] + a[3][i - 2]) % MOD;
            a[3][i] = (a[1][i - 3] + a[2][i - 3]) % MOD;
        }
    }

    cin >> T;
    while (T--)
    {
        cin >> n;
        result = (a[1][n] + a[2][n] + a[3][n]);
        cout << result % MOD << "\n";
    }
    return 0;
}