#include <iostream>
#include <cstring>
using namespace std;

#define MOD 1000000000
long long a[101][10], result;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 1; i <= 9; i++)
        a[1][i] = 1;

    for (int i = 1; i <= 99; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j == 0)
                a[i + 1][1] += (a[i][0]) % MOD;
            else if (j == 9)
                a[i + 1][8] += (a[i][9]) % MOD;
            else
            {
                a[i + 1][j - 1] += (a[i][j]) % MOD;
                a[i + 1][j + 1] += (a[i][j]) % MOD;
            }
        }
    }

    cin >> n;
    for (int i = 0; i <= 9; i++)
    {
        result += a[n][i];
    }
    cout << result % MOD << "\n";
    return 0;
}