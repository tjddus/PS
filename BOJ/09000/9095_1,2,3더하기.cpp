#include <iostream>
using namespace std;

int arr[12];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == 2)
                arr[i] = i;
            else if (i == 3)
                arr[i] = 4;
            else
            {
                if (arr[i] == 0)
                    arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
            }
        }
        cout << arr[n] << "\n";
    }

    return 0;
}