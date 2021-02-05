#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 13

int n, lotto[MAX_N], visited[MAX_N];
vector<int> v;

void DFS(int idx, int cnt)
{
    if (cnt == 6)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = idx; i < n; i++)
    {
        if (visited[i])
            continue;
        visited[i] = true;
        v.push_back(lotto[i]);
        DFS(i, cnt + 1);
        visited[i] = false;
        v.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> lotto[i];
        }
        sort(lotto, lotto + n);
        DFS(0, 0);
        cout << "\n";
    }

    return 0;
}
