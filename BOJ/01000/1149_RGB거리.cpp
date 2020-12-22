#include <iostream>
#include <algorithm>
using namespace std;

int N;
long long dp[1001][3], minCost;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
    }

    for (int i = 2; i <= N; i++)
    {
        dp[i][0] = min(dp[i - 1][1] + dp[i][0], dp[i - 1][2] + dp[i][0]);
        dp[i][1] = min(dp[i - 1][0] + dp[i][1], dp[i - 1][2] + dp[i][1]);
        dp[i][2] = min(dp[i - 1][0] + dp[i][2], dp[i - 1][1] + dp[i][2]);
    }

    minCost = min(dp[N][0], dp[N][1]);
    minCost = min(minCost, dp[N][2]);

    cout << minCost << "\n";
    return 0;
}
