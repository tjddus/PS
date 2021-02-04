#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n, a[9], cnt = 1, ans = -1, sum = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt *= i + 1;
    }

    sort(a, a + n);

    while (--cnt)
    {
        next_permutation(a, a + n);
        for (int i = 1; i < n; i++)
        {
            sum += abs(a[i] - a[i - 1]);
        }
        ans = max(ans, sum);
        sum = 0;
    }

    cout << ans << "\n";
    return 0;
}