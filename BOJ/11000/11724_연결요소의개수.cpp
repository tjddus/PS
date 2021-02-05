#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

#define MAX_N 1005

int n, m, list[MAX_N];
vector<int> root;

int find(int a)
{
    if (list[a] == a)
        return a;
    return list[a] = find(list[a]);
}

void merge(int a, int b)
{
    int p_a = find(list[a]);
    int p_b = find(list[b]);

    list[p_a] = p_b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        list[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }

    for (int i = 1; i <= n; i++)
    {
        int r = find(list[i]);
        int flag = true;
        for (int i = 0; i < root.size(); i++)
        {
            if(r == root[i]){
                flag = false;
                break;
            }
        }

        if(flag){
            root.push_back(r);
        }
    }

    cout << root.size() << "\n";
    return 0;
}