#include <iostream>
#include <algorithm>
using namespace std;

int a[1001], dp[1001], n, total;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = a[i];
    }

    total = a[1];
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
        total = max(total, dp[i]);
    }

    cout << total << "\n";
    return 0;
}
