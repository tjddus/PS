#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <vector>

using namespace std;

typedef pair<int, int> pii;
#define MAX_N 205
#define INF 987654321

int solution(int n, int s, int a, int b, vector<vector<int> > fares)
{
    int answer = INF;
    int d[MAX_N][MAX_N];
    vector<pii> maps[MAX_N];

    fill(d[0], d[0] + (205 * 205), INF);
    for (int i = 0; i < fares.size(); i++)
    {
        maps[fares[i][0]].push_back(make_pair(fares[i][1], fares[i][2]));
        maps[fares[i][1]].push_back(make_pair(fares[i][0], fares[i][2]));
    }

    // 다익스트라 알고리즘 (각 지점으로부터 최단 경로 구하기)
    for (int k = 1; k <= n; k++)
    {
        priority_queue<pii> pq;
        pq.push(make_pair(0, k));

        while (!pq.empty())
        {
            int distance = -pq.top().first;
            int nd = pq.top().second;
            pq.pop();

            if (distance > d[k][nd])
                continue;
            d[k][nd] = distance;

            for (auto next : maps[nd])
            {
                if (d[k][next.first] > d[k][nd] + next.second)
                {
                    d[k][next.first] = d[k][nd] + next.second;
                    pq.push(make_pair(-d[k][next.first], next.first));
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        if (d[i][s] != INF && d[i][a] != INF && d[i][b] != INF)
        {
            cnt += (d[i][s] + d[i][a] + d[i][b]);
            answer = min(answer, cnt);
        }
    }

    return answer;
}
