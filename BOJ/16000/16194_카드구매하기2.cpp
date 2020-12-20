#include <iostream>
#include <algorithm>
using namespace std;

int P[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int p;
        cin >> p;
        P[i] = p;
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= (int)i / 2; j++)
        {
            P[i] = min(P[i], P[j] + P[i - j]);
        }
    }

    cout << P[N] << "\n";
    return 0;
}