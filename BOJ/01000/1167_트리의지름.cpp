#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

#define MAX_N 100005

int V, visited[MAX_N], ans, maxIdx;
vector<pair<int, int> > v[MAX_N];
queue<pair<int, int> > q;

void BFS()
{
    while (!q.empty())
    {
        int front = q.front().first;
        int dist = q.front().second;
        q.pop();

        for (int i = 0; i < v[front].size(); i++)
        {
            if (visited[v[front][i].first] == -1)
            {
                visited[v[front][i].first] = dist + v[front][i].second;
                q.push(make_pair(v[front][i].first, visited[v[front][i].first]));
            }

            if (visited[v[front][i].first] > ans)
            {
                ans = visited[v[front][i].first];
                maxIdx = v[front][i].first;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    memset(visited, -1, sizeof(visited));
    cin >> V;
    for (int i = 0; i < V; i++)
    {
        int a;
        cin >> a;

        while (1)
        {
            int b, c;
            cin >> b;
            if (b == -1)
            {
                break;
            }
            cin >> c;
            v[a].push_back(make_pair(b, c));
        }
    }

    visited[1] = 0;
    q.push(make_pair(1, 0));
    BFS();

    memset(visited, -1, sizeof(visited));
    visited[maxIdx] = 0;
    q.push(make_pair(maxIdx, 0));
    BFS();

    cout << ans << "\n";
    return 0;
}