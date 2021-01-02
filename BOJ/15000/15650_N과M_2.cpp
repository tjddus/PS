#include <iostream>
using namespace std;

int n, m;
bool visited[9];

void DFS(int idx, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == true)
                cout << i + 1 << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = idx; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        visited[i] = true;
        DFS(i, cnt + 1);
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    DFS(0, 0);
    return 0;
}