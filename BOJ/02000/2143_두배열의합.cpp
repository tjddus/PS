#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, T, sum = 0, a[1001], b[1001];
long long ans = 0;
vector<int> suma, sumb;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        int asum = 0;
        for (int j = i; j < n; j++)
        {
            asum += a[j];
            suma.push_back(asum);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int bsum = 0;
        for (int j = i; j < m; j++)
        {
            bsum += b[j];
            sumb.push_back(bsum);
        }
    }

    sort(suma.begin(), suma.end());
    sort(sumb.begin(), sumb.end());

    int s = 0, e = sumb.size() - 1;

    while (e >= 0 && s < suma.size())
    {
        sum = suma[s] + sumb[e];
        if (sum > T)
            --e;
        else if (sum < T)
            ++s;
        else
        {
            int cnt1 = 0, cnt2 = 0;
            int currentS = s, currentE = e;
            while (suma[currentS] == suma[s] && s < suma.size())
            {
                ++cnt1;
                ++s;
            }
            while (sumb[currentE] == sumb[e] && e >= 0)
            {
                ++cnt2;
                --e;
            }
            ans += (long long)cnt1 * (long long)cnt2;
        }
    }

    cout << ans << "\n";
    return 0;
}
