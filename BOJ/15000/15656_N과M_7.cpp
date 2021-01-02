#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, a[9];
vector<int> v;

void DFS(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back(a[i]);
        DFS(cnt + 1);
        v.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    DFS(0);
    return 0;
}