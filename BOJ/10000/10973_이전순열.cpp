#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10005

int n, a[MAX_N];
bool flag = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && a[i - 1] > a[i])
            flag = false;
    }

    if (flag)
    {
        cout << -1 << "\n";
        return 0;
    }

    prev_permutation(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}