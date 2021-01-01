#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n, cnt, nSize;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        nSize++;
    }

    for (int i = 1; i < nSize; i++)
        cnt += i * (9 * pow(10, i - 1));
    cnt += nSize * (n - pow(10, nSize - 1) + 1);

    cout << cnt << "\n";
    return 0;
}