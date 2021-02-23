#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

#define MAX_N 305

int T, I, visited[MAX_N][MAX_N], ans, sx, sy, ex, ey;
int dx[8] = {-2, -1, -2, -1, 2, 1, 2, 1}, dy[8] = {-1, -2, 1, 2, -1, -2, 1, 2};
queue<pair<int, pair<int, int> > > q;

void BFS()
{
    while (!q.empty())
    {
        int X = q.front().first;
        int Y = q.front().second.first;
        int cnt = q.front().second.second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ntX = X + dx[i];
            int ntY = Y + dy[i];

            if (0 <= ntX && ntX < I && 0 <= ntY && ntY < I)
            {
                if (visited[ntX][ntY] == 0)
                {
                    visited[ntX][ntY] = 1;
                    q.push(make_pair(ntX, make_pair(ntY, cnt + 1)));
                    if (ntX == ex && ntY == ey)
                    {
                        ans = max(ans, cnt + 1);
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

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        ans = 0;
        memset(visited, 0, sizeof(visited));

        cin >> I;
        cin >> sx >> sy;
        cin >> ex >> ey;
        visited[sx][sy] = 1;
        q.push(make_pair(sx, make_pair(sy, 0)));
        BFS();
        cout << ans << "\n";
    }

    return 0;
}