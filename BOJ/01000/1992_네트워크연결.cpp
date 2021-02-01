#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 1005

int par[MAX_N], ans;
vector<pair<int, pair<int, int> > > v;

int find(int a)
{
    if (par[a] == a)
        return a;

    return par[a] = find(par[a]);
}

void merge(int a, int b)
{
    int p_a = find(a);
    int p_b = find(b);

    par[p_a] = p_b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_pair(c, make_pair(a, b)));
    }

    sort(v.begin(), v.end());

    for (int i = 1; i <= N; i++)
    {
        par[i] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (find(v[i].second.first) != find(v[i].second.second))
        {
            merge(v[i].second.first, v[i].second.second);
            ans += v[i].first;
        }
    }

    cout << ans << "\n";
    return 0;
}
