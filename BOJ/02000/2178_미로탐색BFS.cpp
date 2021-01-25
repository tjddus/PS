#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

int X, Y, ans;
int visited[101][101], chk[101][101], maps[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pii> que;

void BFS()
{
    int x = 0, y = 0, Next_X, Next_Y;
    que.push(make_pair(x, y));

    while (!que.empty())
    {
        x = que.front().first;
        y = que.front().second;
        que.pop();

        for (int i = 0; i < 4; i++)
        {
            Next_X = x + dx[i];
            Next_Y = y + dy[i];

            if (Next_X < 0 || Next_Y < 0 || Next_X >= X || Next_Y >= Y || maps[Next_X][Next_Y] == 0)
                continue;
            if (maps[Next_X][Next_Y] == 1 && visited[Next_X][Next_Y] == 0)
            {
                que.push(make_pair(Next_X, Next_Y));
                visited[Next_X][Next_Y] = 1;
                chk[Next_X][Next_Y] = chk[x][y] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> X >> Y;
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            char c;
            cin >> c;
            maps[i][j] = c - '0';
        }
    }

    BFS();
    cout << chk[X - 1][Y - 1] + 1 << "\n";

    return 0;
}
