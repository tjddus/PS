#include <iostream>
using namespace std;

#define MAX_N 101
#define INF 999999

int n, m;
int dist[MAX_N][MAX_N], adjList[MAX_N][MAX_N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = INF;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int from, to, cost;
        cin >> from >> to >> cost;
        if(dist[from][to] > cost)
            dist[from][to] = cost;
    }

    for (int k = 1; k <= n; k++) //경유지
    {
        for (int i = 1; i <= n; i++) //출발지
        {
            for (int j = 1; j <= n; j++) //도착지
            {
                if(i == j) dist[i][j] = 0;
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}