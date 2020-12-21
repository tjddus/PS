#include <iostream>
#include <algorithm>
using namespace std;

int N, a[100001], dp[100001], maxS;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }

    dp[1] = maxS = a[1];
    for (int i = 2; i <= N; i++)
    {
        dp[i] = max(a[i], dp[i - 1] + a[i]);
        maxS = max(maxS, dp[i]);
    }

    cout << maxS << "\n";

    return 0;
}