#include <iostream>
#include <cstring>
using namespace std;

#define MOD 1000000000
long long N, K, a[201][201];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (i == 0 || j == 1)
                a[i][j] = 1;
            else
            {
                a[i][j] = (a[i][j - 1] + a[i - 1][j]) % MOD;
            }
        }
    }

    cout << (a[N][K]) % MOD;
    return 0;
}