#include <iostream>
using namespace std;

long long a[91][2];
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    a[1][0] = 0;
    a[1][1] = 1;

    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        a[i][0] = a[i - 1][0] + a[i - 1][1];
        a[i][1] = a[i - 1][0];
    }
    cout << a[n][0] + a[n][1] << "\n";
    return 0;
}