#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define MAX_N 1005

int M, N, a[MAX_N][MAX_N], visited[MAX_N][MAX_N], ans;
queue<pair<int, pair<int, int> > > q;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};

void BFS()
{
    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int next_X = front.first + dx[i];
            int next_Y = front.second.first + dy[i];
            int cnt = front.second.second;
            if (0 <= next_X && next_X < N && 0 <= next_Y && next_Y < M)
            {
                if (visited[next_X][next_Y] == 0)
                {
                    visited[next_X][next_Y] = 1;
                    if (a[next_X][next_Y] == 0)
                    {
                        a[next_X][next_Y] = cnt + 1;
                        q.push(make_pair(next_X, make_pair(next_Y, cnt + 1)));
                        ans = max(ans, cnt);
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

    cin >> M >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                visited[i][j] = 1;
                q.push(make_pair(i, make_pair(j, 1)));
            }
        }
    }

    BFS();
    for(int i =0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(a[i][j] == 0){
                cout << -1 << "\n";
                return 0;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
