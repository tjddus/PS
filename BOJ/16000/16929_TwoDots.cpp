#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 55

int N, M, flag, visited[MAX_N][MAX_N], sx, sy, cnt;
char a[MAX_N][MAX_N];
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

void DFS(int X, int Y, char c)
{
    for (int i = 0; i < 4; i++)
    {
        int ntX = X + dx[i];
        int ntY = Y + dy[i];

        if (0 <= ntX && ntX < N && 0 <= ntY && ntY < M)
        {
            if (visited[ntX][ntY] == 1 && a[ntX][ntY] == c && ntX == sx && ntY == sy && cnt != 1) 
            {
                flag = 1;
            }
            if (visited[ntX][ntY] == 1 || a[ntX][ntY] != c)
                continue;
            visited[ntX][ntY] = 1;
            cnt++;
            DFS(ntX, ntY, c);
            visited[ntX][ntY] = 0;
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

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (visited[i][j] == 0)
            {
                flag = 0;
                cnt = 0;
                sx = i;
                sy = j;
                visited[i][j] = 1;
                DFS(i, j, a[i][j]);
            }
            if(flag){
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
    return 0;
}