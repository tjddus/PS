#include <iostream>
#include <algorithm>
using namespace std;

long long a[2][100001], dp[2][100001];
int n, T;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                dp[i][j] = a[i][j];
            }
        }

        dp[0][2] = dp[1][1] + dp[0][2];
        dp[1][2] = dp[0][1] + dp[1][2];

        for (int i = 3; i <= n; i++)
        {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + dp[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + dp[1][i];
        }

        cout << max(dp[0][n], dp[1][n]) << "\n";
    }

    return 0;
}