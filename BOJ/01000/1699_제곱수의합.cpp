#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int N, a[100001], temp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    a[1] = 1;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        a[i] = i;
        for (int j = (int)sqrt(i); j >= 1; j--)
        {
            temp = i - pow(j, 2);
            a[i] = min(a[i], a[temp] + 1);
        }
    }

    cout << a[N] << "\n";
    return 0;
}