#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 10005

int par[MAX_N];
vector<pair<int, pair<int, int> > > v;
long long ans;

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

    par[p_b] = p_a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int V, E;
    cin >> V >> E;
    for (int i = 0; i < E; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_pair(c, make_pair(a, b)));
    }

    sort(v.begin(), v.end());

    for (int i = 1; i <= V; i++)
    {
        par[i] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(find(v[i].second.first) != find(v[i].second.second)){
            merge(v[i].second.first, v[i].second.second);
            ans += v[i].first;
        }
    }

    cout << ans << "\n";

    return 0;
}