#include <iostream>
using namespace std;

pair<int, int> a[51];
int n, score[51];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
        score[i] = 1;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].first < a[j].first && a[i].second < a[j].second)
                score[i] += 1;
            else if (a[i].first > a[j].first && a[i].second > a[j].second)
                score[j] += 1;
        }
    }

    for (int i = 1; i <= n; i++)
        cout << score[i] << " ";

    return 0;
}