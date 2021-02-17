#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

#define MAX_N 2005

int N, M, visited[MAX_N], flag = false;
vector<int> v[MAX_N];

void DFS(int n, int cnt)
{
    if (cnt == 5)
    {
        flag = true;
        return;
    }

    for (int i = 0; i < v[n].size(); i++)
    {
        if (visited[v[n][i]] == 0)
        {
            visited[v[n][i]] = 1;
            cnt++;
            DFS(v[n][i], cnt);
            visited[v[n][i]] = 0;
            cnt--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i <= N; i++)
    {
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        DFS(i, 1);
        if (flag)
        {
            cout << 1 << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";

    return 0;
}