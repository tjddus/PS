#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 55

int N, M, mapA[MAX_N][MAX_N], mapB[MAX_N][MAX_N], ans = 0, flag = true;

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
            char a;
            cin >> a;
            mapA[i][j] = a - '0';
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char a;
            cin >> a;
            mapB[i][j] = a - '0';
        }
    }

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 0; j < M - 2; j++)
        {
            if (mapA[i][j] != mapB[i][j])
            {
                for (int ni = 0; ni < 3; ni++)
                {
                    for (int nj = 0; nj < 3; nj++)
                    {
                        mapA[i + ni][j + nj] = (mapA[i + ni][j + nj] == 0) ? 1 : 0;
                    }
                }
                ans++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mapA[i][j] != mapB[i][j])
            {
                ans = -1;
                break;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}