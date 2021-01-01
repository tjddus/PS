#include <iostream>
#include <algorithm>
using namespace std;

char a[51][51];
int n, result = 0;

void change(int x, int y, int d)
{
    char temp;
    if (d == 0)
    {
        if (y != n)
            swap(a[x][y], a[x][y + 1]);
    }
    else
    {
        if (x != n)
            swap(a[x][y], a[x + 1][y]);
    }
}

void solve()
{
    char temp;
    int cnt;

    for (int i = 1; i <= n; i++)
    {
        temp = a[i][1];
        cnt = 1;
        for (int j = 2; j <= n; j++)
        {
            if (temp == a[i][j])
            {
                cnt++;
            }
            else
            {
                temp = a[i][j];
                cnt = 1;
            }
            result = max(result, cnt);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        temp = a[1][i];
        cnt = 1;
        for (int j = 2; j <= n; j++)
        {
            if (temp == a[j][i])
            {
                cnt++;
            }
            else
            {
                temp = a[j][i];
                cnt = 1;
            }
            result = max(result, cnt);
        }
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
            cin >> a[i][j];
        }
    }

    solve();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            change(i, j, 0);
            solve();
            change(i, j, 0);
            change(i, j, 1);
            solve();
            change(i, j, 1);
        }
    }

    cout << result << "\n";

    return 0;
}