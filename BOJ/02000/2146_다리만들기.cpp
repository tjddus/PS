#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define MAX_N 102
#define INF 9999999

int N, maps[MAX_N][MAX_N], ans, visited[MAX_N][MAX_N], cnt = 0;
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};
queue<pair<int, int> > q1;
queue<pair<int, pair<int, int> > > q2;

void BFS1()
{
    while (!q1.empty())
    {
        int x = q1.front().first;
        int y = q1.front().second;
        q1.pop();
        maps[x][y] = cnt;

        for (int i = 0; i < 4; i++)
        {
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            if (0 <= nextX && nextX < N && 0 <= nextY && nextY < N)
            {
                if (visited[nextX][nextY] == 0 && maps[nextX][nextY] != 0)
                {
                    visited[nextX][nextY] = 1;
                    q1.push(make_pair(nextX, nextY));
                }
            }
        }
    }
}

void BFS2()
{
    while (!q2.empty())
    {
        int x = q2.front().first;
        int y = q2.front().second.first;
        int ccnt = q2.front().second.second;
        q2.pop();

        for (int i = 0; i < 4; i++)
        {
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            if (0 <= nextX && nextX < N && 0 <= nextY && nextY < N)
            {
                if(visited[nextX][nextY] == 0 && maps[nextX][nextY] == 0){
                    visited[nextX][nextY] = ccnt + 1;
                    maps[nextX][nextY] = maps[x][y];
                    q2.push(make_pair(nextX, make_pair(nextY, ccnt + 1)));
                }

                if(visited[nextX][nextY] != 0 && maps[nextX][nextY] != maps[x][y]){
                    ans = min(ans, visited[nextX][nextY] + ccnt);
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ans = INF;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> maps[i][j];
            if (maps[i][j] == 1)
            {
                q2.push(make_pair(i, make_pair(j, 0)));
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (maps[i][j] != 0 && visited[i][j] == 0)
            {
                visited[i][j] = 1;
                q1.push(make_pair(i, j));
                ++cnt;
                BFS1();
            }
        }
    }

    BFS2();
    cout << ans << "\n";

    return 0;
}