#include <iostream>
using namespace std;

#define MAX_N 305

int n, a[MAX_N], dp[MAX_N][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    dp[0][0] = a[0];
    dp[1][0] = a[0] + a[1];
    dp[1][1] = a[1];

    for (int i = 2; i < n; i++)
    {
        dp[i][0] = a[i] + dp[i - 1][1];
        dp[i][1] = a[i] + max(dp[i - 2][0], dp[i - 2][1]);
    }

    cout << max(dp[n - 1][0], dp[n - 1][1]) << "\n";

    return 0;
}