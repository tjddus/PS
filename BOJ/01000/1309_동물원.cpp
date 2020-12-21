#include <iostream>
using namespace std;

#define MOD 9901
long long N, a[100001][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    a[1][0] = a[1][1] = a[1][2] = 1;

    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        a[i][0] = (a[i - 1][1] + a[i - 1][2]) % MOD;
        a[i][1] = (a[i - 1][0] + a[i - 1][2]) % MOD;
        a[i][2] = (a[i - 1][0] + a[i - 1][1] + a[i - 1][2]) % MOD;
    }

    cout << (a[N][0] + a[N][1] + a[N][2]) % MOD << "\n";
    return 0;
}