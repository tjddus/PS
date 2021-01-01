#include <iostream>
#include <cmath>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            cout << i << "\n";
        }
    }

    if (n > 1)
        cout << n << "\n";
        
    return 0;
}
