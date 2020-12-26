#include <iostream>
using namespace std;

#define MOD 10007
long long dp[1001][10], N, result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i <= 9; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                dp[i][j] += dp[i - 1][k];
            }
            dp[i][j] = dp[i][j] % MOD;
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        result += dp[N][i];
    }
    cout << result % MOD << "\n";
    return 0;
}
