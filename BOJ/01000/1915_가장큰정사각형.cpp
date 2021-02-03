#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1005

int n, m, a[MAX_N][MAX_N], dp[MAX_N][MAX_N], ans = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0)
            {
                if (a[i][j] == 0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = 1;
            }
            else
            {
                if(a[i][j] == 1)
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            }
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans * ans << "\n";
    return 0;
}