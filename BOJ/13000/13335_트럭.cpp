#include <bits/stdc++.h>
using namespace std;

#define MAX_N 1005

int main()
{
    int n, w, L;
    cin >> n >> w >> L;

    int truck[MAX_N];
    int inputTime[MAX_N];

    for (int i = 0; i < n; i++)
    {
        cin >> truck[i];
        inputTime[i] = 0;
    }

    int t = 1, s = 0, e = -1;
    int wSum = 0;

    while (s < n)
    {
        if (inputTime[s] != 0 && inputTime[s] + w == t)
        {
            wSum -= truck[s];
            s++;
        }

        if ( e + 1 < n && wSum + truck[e + 1] <= L)
        {
            e++;
            wSum += truck[e];
            inputTime[e] = t;
        }
        t++;
    }

    cout << --t;

    return 0;
}