#include <bits/stdc++.h>
using namespace std;

#define MAX_N 10
#define INF 987654321

vector<int> Solution(int n, vector<int> passenger, vector<vector<int> > train)
{
    vector<int> answer;
    vector<pair<int, int> > arr[MAX_N];
    int distance[MAX_N], end, ans, visited[MAX_N];
    for (int i = 0; i < train.size(); i++)
    {
            arr[train[i][0]].push_back(make_pair(train[i][1], passenger[train[i][1] - 1]));
    }
    memset(visited, 0, sizeof(visited));
    memset(distance, 0, sizeof(distance));

    queue<pair<int, int> > q;
    q.push(make_pair(1, passenger[0]));
    while (!q.empty())
    {
        int nd = q.front().first;
        int d = q.front().second;
        q.pop();

        for (int i = 0; i < arr[nd].size(); i++)
        {
            if (visited[arr[nd][i].first] == 1)
                continue;
            visited[arr[nd][i].first] = 1;
            q.push(make_pair(arr[nd][i].first, arr[nd][i].second + d));
            if (distance[arr[nd][i].first] <= arr[nd][i].second + d)
            {
                distance[arr[nd][i].first] = arr[nd][i].second + d;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (ans <= distance[i])
        {
            end = i;
            ans = distance[i];
        }
    }

    answer.push_back(end);
    answer.push_back(ans);


    return answer;
}