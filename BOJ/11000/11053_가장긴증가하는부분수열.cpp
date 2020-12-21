#include <iostream>
#include <algorithm>
using namespace std;

int N, cnt = 1;
pair<int, int> a[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i].first;
        a[i].second = 1;
    }

    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = i; j <= N; j++)
        {
            if (a[i].first < a[j].first)
                a[i].second = max(a[i].second, a[j].second + 1);
        }
        cnt = max(cnt, a[i].second);
    }

    cout << cnt << "\n";
    return 0;
}
