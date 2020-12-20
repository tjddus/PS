#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == 2)
            arr[i] = i;
        else
        {
            if (arr[i] == 0)
                arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
        }
    }

    cout << arr[n] << "\n";

    return 0;
}