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
        int tmp = 0;
        for (int j = 0; j <= 9; j++)
        {
            tmp += dp[i-1][j] % MOD;
            dp[i][j] = tmp;
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        result += dp[N][i];
    }
    cout << result % MOD << "\n";
    return 0;
}
