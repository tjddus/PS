#include <iostream>
using namespace std;

int day[16], N, isPlus = 0;
long long W, C;

int main()
{
    cin >> N >> W;
    for (int i = 1; i <= N; i++)
    {
        cin >> day[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (isPlus == 0 && (day[i] < day[i + 1]))
        {
            isPlus = 1;
            C = W / day[i];
            W = W % day[i];
        }

        if (isPlus == 1 && (day[i] > day[i + 1]))
        {
            isPlus = 0;
            W += C * day[i];
        }
    }

    cout << W << "\n";
    return 0;
}