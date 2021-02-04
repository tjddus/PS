#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10005

int n, a[MAX_N], pos;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = n; i > 0; i--)
    {
        if (a[i - 1] < a[i])
        {
            pos = i - 1;
            break;
        }
    }

    if (pos == 0)
    {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = n; i > 0; i--)
    {
        if (a[pos] < a[i])
        {
            int temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
            break;
        }
    }

    sort(a + pos + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}