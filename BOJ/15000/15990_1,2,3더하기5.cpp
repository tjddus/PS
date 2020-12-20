#include <iostream>
using namespace std;

long long a[4][100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        long long result;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                a[1][1] = 1;
            }
            else if (i == 2)
            {
                a[2][2] = 1;
            }
            else if (i == 3)
            {
                a[1][3] = 1;
                a[2][3] = 1;
                a[3][3] = 1;
            }
            else
            {
                if (a[1][i] == 0 && a[2][i] == 0 && a[3][i] == 0)
                {
                    a[1][i] = (a[2][i - 1] + a[3][i - 1]) % 1000000009;
                    a[2][i] = (a[1][i - 2] + a[3][i - 2]) % 1000000009;
                    a[3][i] = (a[1][i - 3] + a[2][i - 3]) % 1000000009;
                }
            }
        }
        result = (a[1][n] + a[2][n] + a[3][n]);
        cout << result % 1000000009 << "\n";
    }
    return 0;
}