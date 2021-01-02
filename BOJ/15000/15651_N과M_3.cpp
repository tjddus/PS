#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v;

void DFS(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back(i+1);
        DFS(cnt + 1);
        v.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    DFS(0);

    return 0;
}