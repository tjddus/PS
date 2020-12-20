#include <iostream>
using namespace std;

int tileNum[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            tileNum[1] = 1;
        else if (i == 2)
            tileNum[2] = 3;
        else
        {
            if (tileNum[i] == 0)
                tileNum[i] = (tileNum[i - 1] + tileNum[i - 2] * 2) % 10007;
        }
    }

    cout << tileNum[n] << "\n";
    return 0;
}