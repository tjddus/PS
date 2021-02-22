#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

#define MAX_N 20005

int K, V, E, visited[MAX_N], check = 2;
bool flag = true;
vector<int> v[MAX_N];
queue<pair<int, int> > q;

void BFS()
{
    while (!q.empty())
    {
        int node = q.front().first;
        int belong = q.front().second;
        q.pop();

        for (int i = 0; i < v[node].size(); i++)
        {
            check = (belong == 1) ? 2 : 1;
            if (visited[v[node][i]] == 0)
            {
                q.push(make_pair(v[node][i], check));
                visited[v[node][i]] = check;
                check = belong;
            }
            else
            {
                if (visited[v[node][i]] != check)
                    flag = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> V >> E;

        memset(visited, 0, sizeof(visited));
        flag = true;
        for (int k = 1; k <= V; k++)
            v[k].clear();



        for (int j = 0; j < E; j++)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for (int t = 1; t <= V; t++)
        {
            if (visited[t] == 0)
            {
                visited[t] = 1;
                check = 2;
                q.push(make_pair(t, 1));
                BFS();

                if (!flag)
                {
                    cout << "NO\n";
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
    }

    return 0;
}
