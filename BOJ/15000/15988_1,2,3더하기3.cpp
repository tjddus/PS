#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#define MOD 1'000'000'009
long long T, N, a[1000001];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for (int i = 4; i <= 1000000; i++)
        a[i] = (a[i - 1] + a[i - 2] + a[i - 3]) % MOD;

    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << a[N] % MOD << "\n";
    }
    return 0;
}