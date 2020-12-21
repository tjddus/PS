#include <iostream>
using namespace std;

int N, a[1001], dp[1001], nextIdx[1001], mC = 1, mI;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
        dp[i] = 1;
    }

    mI = N;
    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = i; j <= N; j++)
        {
            if (a[i] < a[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
                nextIdx[i] = j;
            }
        }
        if (mC < dp[i])
        {
            mC = dp[i];
            mI = i;
        }
    }

    cout << mC << "\n";
    while (mC--)
    {
        cout << a[mI] << " ";
        mI = nextIdx[mI];
    }
    return 0;
}