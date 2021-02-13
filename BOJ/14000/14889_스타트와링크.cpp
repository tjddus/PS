#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 25

int n, visited[MAX_N] = {0, 1}, arr[MAX_N][MAX_N], arr1[MAX_N] = {0, 1}, arr2[MAX_N], ans = 999999;

void DFS(int idx, int depth)
{
    if (depth > n / 2)
    {
        int j = 0, start = 0, link = 0;
        
        for (int i = 2; i <= n; i++)
        {
            if (visited[i] == 0)
                arr2[++j] = i;
        }

        for (int i = 1; i < depth; i++)
        {
            for (int j = i + 1; j < depth; j++)
            {
                start += (arr[arr1[i]][arr1[j]] + arr[arr1[j]][arr1[i]]);
                link += (arr[arr2[i]][arr2[j]] + arr[arr2[j]][arr2[i]]);
            }
        }
        
        ans = min(ans, abs(start - link));
        return;
    }

    for (int i = idx; i <= n; i++)
    {
        arr1[depth] = i;
        visited[i] = 1;
        DFS(i + 1, depth + 1);
        visited[i] = 0;
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
            cin >> arr[i][j];
        }
    }
    DFS(2, 2);
    cout << ans << "\n";

    return 0;
}