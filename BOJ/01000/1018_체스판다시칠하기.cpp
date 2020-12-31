#include <iostream>
#include <algorithm>
using namespace std;

int n, m, a[51][51];
char s;

int solve(int x, int y);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cnt = 64;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s;
            if (s == 'W')
                a[i][j] = 0;
            else if (s == 'B')
                a[i][j] = 1;
        }
    }

    for (int i = 1; i <= n - 7; i++)
    {
        for (int j = 1; j <= m - 7; j++)
        {
            cnt = min(cnt, solve(i, j));
        }
    }

    cout << cnt << "\n";
    return 0;
}

int solve(int x, int y)
{
    int minCnt = 64, cnt = 0;
    for (int wb = 0; wb <= 1; wb++)
    {
        for (int i = x; i < x + 8; i++)
        {
            for (int j = y; j < y + 8; j++)
            {
                if ((i + j) % 2 == 0 && a[i][j] != (wb % 2))
                {
                    cnt++;
                }
                else if ((i + j) % 2 == 1 && a[i][j] != ((wb + 1) % 2))
                {
                    cnt++;
                }
            }
        }
        minCnt = min(minCnt, cnt);
        cnt = 0;
    }
    return minCnt;
}
