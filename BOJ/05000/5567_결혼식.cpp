#include <iostream>
#include <queue>
using namespace std;

#define MAX_N 501

int n, m, a[MAX_N][MAX_N], ans = 0, friends = 0;
queue<int> q;

bool visited[MAX_N] = {false};

void BFS()
{
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i] && a[front][i] == 1)
            {
                if (front == 1)
                {
                    q.push(i);
                }
                friends++;
                visited[i] = true;
            }
        }
    }
    cout << friends << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        a[num1][num2] = a[num2][num1] = 1;
    }

    q.push(1);
    visited[1] = true;
    BFS();

    return 0;
}
