#include <iostream>
#include <algorithm>
using namespace std;

int n;
pair<int, int> a[100001];

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
        cout << a[i].first << " " << a[i].second << "\n";

    return 0;
}