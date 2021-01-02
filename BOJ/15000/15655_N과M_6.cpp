#include <iostream>
#include <algorithm>
using namespace std;

int n, m, a[9];
bool visited[9];

void DFS(int Idx, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == true)
                cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = Idx; i < n; i++)
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    DFS(0, 0);
    return 0;
}