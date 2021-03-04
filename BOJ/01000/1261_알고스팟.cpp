#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

#define MAX_N 105

int N, M, maps[MAX_N][MAX_N], visited[MAX_N][MAX_N];
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
queue<pair<int, int> > q;

void BFS()
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nextX = x + dx[i];
            int nextY = y + dy[i];
            if (0 <= nextX && nextX < M && 0 <= nextY && nextY < N)
            {
                if (visited[nextX][nextY] == -1)
                {
                    if (maps[nextX][nextY] == 0)
                    {
                        visited[nextX][nextY] = visited[x][y];
                    }
                    else
                    {
                        visited[nextX][nextY] = visited[x][y] + 1;
                    }
                    q.push(make_pair(nextX, nextY));
                }
                else
                {
                    if (maps[nextX][nextY] == 0 && visited[nextX][nextY] > visited[x][y])
                    {
                        visited[nextX][nextY] = visited[x][y];
                        q.push(make_pair(nextX, nextY));
                    }
                    if (maps[nextX][nextY] == 1 && visited[nextX][nextY] > visited[x][y] + 1)
                    {
                        visited[nextX][nextY] = visited[x][y] + 1;
                        q.push(make_pair(nextX, nextY));
                    }
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

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            char c;
            cin >> c;
            maps[i][j] = c - '0';
        }
    }

    memset(visited, -1, sizeof(visited));
    visited[0][0] = maps[0][0];
    q.push(make_pair(0, 0));
    BFS();
    cout << visited[M - 1][N - 1] << "\n";
    return 0;
}