#include <iostream>
#include <cmath>
using namespace std;

int primeNumber[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    for (int i = 2; i < sqrt(1000000); i++)
    {
        for (int j = i + i; j < 1000000; j += i)
        {
            if (primeNumber[j] == 0)
                primeNumber[j] = 1;
        }
    }
    int T;
    cin >> T;
    while (T--)
    {
        int n, cnt = 0;
        cin >> n;
        for (int i = 2; i <= n / 2; i++)
        {
            if (primeNumber[i] == 0 && primeNumber[n - i] == 0)
                cnt++;
        }
        cout << cnt << "\n";
        cnt = 0;
    }
    return 0;
}