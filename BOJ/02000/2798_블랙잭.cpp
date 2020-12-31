#include <iostream>
#include <algorithm>
using namespace std;

int n, m, a[101], result = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (a[i] + a[j] + a[k] <= m)
                    result = max(result, a[i] + a[j] + a[k]);
            }
        }
    }

    cout << result << "\n";
    return 0;
}