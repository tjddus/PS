#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int N, K;
long long ans;
priority_queue<pair<int, int> > pq;
multiset<int> c;
multiset<int>::iterator iter;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        pq.push(make_pair(b, a));
    }

    for (int i = 0; i < K; i++)
    {
        int a;
        cin >> a;
        c.insert(a);
    }

    while (!c.empty() && !pq.empty())
    {
        int value = pq.top().first;
        int weight = pq.top().second;
        pq.pop();

        iter = c.lower_bound(weight);
        if (iter != c.end())
        {
            ans += value;
            int num = *iter;
            c.erase(c.find(num));
        }
    }

    cout << ans << "\n";

    return 0;
}