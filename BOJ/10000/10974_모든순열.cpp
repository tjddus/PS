#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, visited[9];
vector<int> v;

void DFS(int cnt)
{
    if (cnt == N)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if(visited[i] == 1) continue;
        visited[i] = 1;
        v.push_back(i);
        DFS(cnt + 1);
        visited[i] = 0;
        v.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    DFS(0);

    return 0;
}