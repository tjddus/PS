#include <iostream>
#include <algorithm>
using namespace std;

int n, a[10001];
long long dp[10001][2], result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i][0] = a[i];
        dp[i][1] = a[i];
    }

    result = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (i != 2)
            dp[i][0] = max(dp[i - 2][0], max(dp[i - 3][1], dp[i - 2][1])) + a[i];
        dp[i][1] = dp[i - 1][0] + a[i];
        result = max(result, max(dp[i][0], dp[i][1]));
    }

    cout << result << "\n";
}