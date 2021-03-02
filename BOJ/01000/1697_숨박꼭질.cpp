#include <iostream>
#include <queue>
using namespace std;

#define MAX_N 200005

int N, K, visited[MAX_N], ans = 999999;
queue<pair<int, int> > q;

void BFS()
{
    while (!q.empty())
    {
        int front = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (front * 2 <= 200000)
        {
            if (visited[front * 2] == 0)
            {
                visited[front * 2] = 1;
                q.push(make_pair(front * 2, cnt + 1));
            }
        }
        if (front + 1 <= 200000)
        {
            if (visited[front + 1] == 0)
            {
                visited[front + 1] = 1;
                q.push(make_pair(front + 1, cnt + 1));
            }
        }
        if (front - 1 >= 0)
        {
            if (visited[front - 1] == 0)
            {
                visited[front - 1] = 1;
                q.push(make_pair(front - 1, cnt + 1));
            }
        }
        if (front * 2 == K || front + 1 == K || front - 1 == K)
        {
            ans = min(ans, cnt + 1);
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    if (N >= K)
    {
        cout << N - K << "\n";
    }
    else
    {
        visited[N] = 1;
        q.push(make_pair(N, 0));
        BFS();
        cout << ans << "\n";
    }

    return 0;
}