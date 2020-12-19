#include <iostream>
using namespace std;

int main()
{
    long long F[100] = {};
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0 || i == 1)
            F[i] = i;
        else
        {
            if (F[i] == 0)
                F[i] = F[i - 1] + F[i - 2];
        }
    }
    cout << F[n] << "\n";
}