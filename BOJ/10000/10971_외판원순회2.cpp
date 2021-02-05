#include <iostream>
using namespace std;

#define INF 99999999
#define MAX_N 11

int n, ans = INF;
int w[MAX_N][MAX_N], visited[MAX_N];

void DFS(int startnd, int nd, int added, int cnt)
{
    if (cnt == n - 1 && w[nd][startnd] != 0)
    {
        ans = min(ans, added + w[nd][startnd]);
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false && w[nd][i] != 0)
        {
            visited[i] = true;
            DFS(startnd, i, added + w[nd][i], cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> w[i][j];
        }
    }

    visited[1] = true;
    DFS(1, 1, 0, 0);

    cout << ans << "\n";
    return 0;
}

/*
1 2 3 4 1 > 1 2 > 2 3 > 3 4 > 4 1
1 2 4 3 1 > 1 2 > 2 4 > 4 3 > 3 1

2 3 4 1 2 > 2 3 > 3 4 > 4 1 > 1 2
2 4 3 1 2 > 2 4 > 4 3 > 3 1 > 1 2

외판원 순회에서 1로 시작하나 2로 시작하나 순회하는 방법이 동일하면 비용이 같다.
*/