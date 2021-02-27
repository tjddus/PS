#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define MAX_N 100005

int n, visited[MAX_N], spoint = 0, epoint = 1, cnt = 0;
vector<int> v[MAX_N], res;
vector<int>::iterator iter;
queue<int> q, ans;
bool flag = true;

void BFS()
{
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        vector<int> fv;
        for (int i = 0; i < v[front].size(); i++)
        {
            if (visited[v[front][i]] == 0)
            {
                visited[v[front][i]] = 1;
                fv.push_back(v[front][i]);
                cnt++;
            }
        }

        while (cnt--)
        {
            int ffront = ans.front();
            ans.pop();
            iter = find(fv.begin(), fv.end(), ffront);
            if (iter == fv.end())
            {
                flag = false;
            }
            else
            {
                q.push(ffront);
            }
        }
        cnt = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans.push(a);
    }

    if (ans.front() != 1)
    {
        flag = false;
    }
    else
    {

        visited[1] = 1;
        q.push(1);
        ans.pop();
        BFS();
    }


    if (flag)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }

    return 0;
}
