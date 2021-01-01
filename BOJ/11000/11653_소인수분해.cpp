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
    int temp = n;
    int i = 2;
    while (temp > 1 && i <= n)
    {
        if (temp % i == 0)
        {
            temp /= i;
            cout << i << "\n";
        }
        else
            i++;
    }

    return 0;
}