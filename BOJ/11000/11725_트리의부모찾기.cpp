#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define MAX_N 100001

vector<int> v[MAX_N];
queue<int> q;
int n, ans[MAX_N], visited[MAX_N];

void BFS()
{
    while (!q.empty())
    {
        int root = q.front();
        q.pop();
        visited[root] = 1;
        for (int i = 0; i < v[root].size(); i++)
        {
            int nd = v[root][i];
            if (visited[nd] == 0)
            {
                ans[nd] = root;
                q.push(nd);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;

        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }

    q.push(1);
    visited[1] = 1;
    BFS();

    for(int i = 2; i<=n; i++){
        cout << ans[i] << "\n";
    }

    return 0;
}
