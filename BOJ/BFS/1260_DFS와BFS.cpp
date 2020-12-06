#include <iostream>
#include <queue>
using namespace std;

// 이 문제는 인터넷 참고

int n, m, v;
int arr[1001][1001] = {};
int visit[1001] = {};
void DFS(int nv);
void BFS(int nv);

int main()
{
    int x, y;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }

    visit[v] = 1;
    DFS(v);
    cout << "\n";
    BFS(v);
    cout << "\n";

    return 0;
}

void DFS(int nv){
    cout << nv << " ";
    visit[nv] = 1;
    for (int i = 1; i <= n; i++)
    {
        if ((arr[nv][i] == 1) && (visit[i] == 0))
        {
            DFS(i);
        }
    }
}

void BFS(int nv)
{
    queue<int> q;
    q.push(nv);
    visit[nv] = 0;
    cout << nv << " ";

    while ((!q.empty()))
    {
        nv = q.front();
        q.pop();
        for (int i = 1; i <= n; i++){
            if((arr[nv][i] == 1) && (visit[i] == 1)){
                q.push(i);
                visit[i] = 0;
                cout << i << " ";
            }
        }
    }
}