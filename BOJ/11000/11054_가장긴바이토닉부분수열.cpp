#include <iostream>
using namespace std;

int a[1001], dp[1001][2], n, result = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i][0] = dp[i][1] = dp[i][2] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
                dp[i][0] = max(dp[i][0], dp[j][0] + 1);
        }
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            if (a[i] > a[j])
                dp[i][1] = max(dp[i][1], dp[j][1] + 1);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        result = max(dp[i][0] + dp[i][1] - 1, result);
    }

    cout << result << "\n";

    return 0;
}