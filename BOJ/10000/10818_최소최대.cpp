#include <iostream>
#include <algorithm>
using namespace std;

int a[1000001], n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    cout << a[0] << " " << a[n-1];

    return 0;
}