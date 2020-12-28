#include <iostream>
#include <algorithm>
using namespace std;

int n, a[501][501];
long long dp[501][501], result = 0;

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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
                dp[i][j] = dp[i - 1][j] + a[i][j];
            else if (j == n)
                dp[i][j] = dp[i - 1][j - 1] + a[i][j];
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        result = max(result, dp[n][i]);
    }
    cout << result << "\n";
    return 0;
}
