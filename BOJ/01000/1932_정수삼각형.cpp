#include <iostream>
#include <algorithm>
using namespace std;

int n, a[501][501];
long long dp[501][501], ans = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }

    dp[1][1] = a[1][1];
    for (int i = 2; i <= n; i++)
    {
        dp[i][1] = a[i][1] + dp[i - 1][1];
        dp[i][i] = a[i][i] + dp[i - 1][i-1];
        for (int j = 2; j < i; j++)
            dp[i][j] = a[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
    }

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << "\n";
    return 0;
}
