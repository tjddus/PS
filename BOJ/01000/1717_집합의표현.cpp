#include <iostream>
using namespace std;

#define MAX_N 1000001

int parent[MAX_N];

int find(int a)
{
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}

int merge(int a, int b){
    int p_a = find(parent[a]);
    int p_b = find(parent[b]);

    parent[p_b] = p_a;
    return p_a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            if(find(b) == find(c))
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
        {
            merge(b, c);
        }
    }

    return 0;
}

/* #유니온 파인드
1) 하나의 집합으로 연결하는 과정
2) 각 노드가 서로 연결되어 있는지 확인하는 과정
*/