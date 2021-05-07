#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
struct roadInfo
{
    int x;
    int y;
    int direction;
    int cost;

    roadInfo(int _x, int _y, int _direction, int _cost)
    {
        x = _x;
        y = _y;
        direction = _direction;
        cost = _cost;
    }
};

int solution(vector<vector<int> > board)
{
    int answer = 999999, n = board.size();
    int visited[25][25] = {
        0,
    };
    queue<roadInfo> q;
    q.push(roadInfo(0, 0, -1, 0));
    visited[0][0] = 1;

    while (!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        int direction = q.front().direction;
        int cost = q.front().cost;
        q.pop();

        if (x == n - 1 && y == n - 1)
        {
            answer = min(answer, cost);
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nextCost = cost + 100;

            if (0 <= nx && nx < n && 0 <= ny && ny < n && board[nx][ny] == 0)
            {
                if (direction != -1 && direction != i)
                {
                    nextCost += 500;
                }
                if (visited[nx][ny] == 0 || nextCost <= visited[nx][ny])
                {
                    visited[nx][ny] = nextCost;
                    q.push(roadInfo(nx, ny, i, visited[nx][ny]));
                }
            }
        }
    }

    cout << answer;
    return answer;
}

int main()
{
    solution({{0, 0, 1, 0}, {0, 0, 0, 0}, {0, 1, 0, 1}, {1, 0, 0, 0}});
    return 0;
}
