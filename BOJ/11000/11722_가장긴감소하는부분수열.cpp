#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n, a[1001], dp[1001], cnt = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[j] > a[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        cnt = max(cnt, dp[i]);
    }
    cout << cnt << "\n";
    return 0;
}