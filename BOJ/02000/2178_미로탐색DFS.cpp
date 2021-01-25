#include <iostream>
using namespace std;

int X, Y, ans = 10001;
int maps[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int visited[101][101];

void DFS(int x, int y, int depth)
{
    if(x < 0 || y < 0 || x >= X || y >= Y) return;
    if (x == X - 1 && y == Y - 1) {
        if(depth < ans){
            ans = depth;
        }
        return;
    }

    for(int i = 0; i<4; i++){
        int Next_X = x + dx[i];
        int Next_Y = y + dy[i];
        if(visited[Next_X][Next_Y] == 0 && maps[Next_X][Next_Y] == 1){
            visited[Next_X][Next_Y] = 1;
            DFS(Next_X, Next_Y, depth + 1);
            visited[Next_X][Next_Y] = 0;
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

    DFS(0, 0, 1);
    cout << ans;

    return 0;
}