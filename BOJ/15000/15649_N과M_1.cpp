#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool visit[9];
vector<int> vec;

void DFS(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (visit[i] == true)
            continue;
        visit[i] = true;
        vec.push_back(i + 1);
        DFS(cnt + 1);
        vec.pop_back();
        visit[i] = false;
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

// 변수명으로 select 사용하지 말기 > 컴파일 에러 발생