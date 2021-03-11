#include <iostream>
using namespace std;

#define MAX_N 100005
#define INF 9999999

int N, mapA[MAX_N], mapB[MAX_N], mapAA[MAX_N], ans, minans = INF;

void switchF()
{
    mapA[0] = 1 - mapA[0];
    mapA[1] = 1 - mapA[1];
    ans++;
}

int check()
{
    for (int i = 0; i < N; i++)
    {
        if (mapA[i] != mapB[i])
        {
            ans = -1;
            break;
        }
    }
    return ans;
}

void switchA()
{
    for (int i = 0; i < N - 2; i++)
    {
        if (mapA[i] == mapB[i])
            continue;
        else
        {
            for (int j = 0; j < 3; j++)
            {
                mapA[i + j] = 1 - mapA[i + j];
            }
            ans++;
        }
    }

    if (mapA[N - 2] != mapB[N - 2] && mapA[N - 1] != mapB[N - 1])
    {
        mapA[N - 2] = 1 - mapA[N - 2];
        mapA[N - 1] = 1 - mapA[N - 1];
        ans++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        char a;
        cin >> a;
        mapA[i] = a - '0';
        mapAA[i] = a - '0';
    }

    for (int i = 0; i < N; i++)
    {
        char a;
        cin >> a;
        mapB[i] = a - '0';
    }

    //#1
    switchF();
    switchA();
    check();
    if (ans != -1)
    {
        minans = min(minans, ans);
    }

    //#2
    ans = 0;
    for (int i = 0; i < N; i++)
    {
        mapA[i] = mapAA[i];
    }
    switchA();
    check();
    if (ans != -1)
    {
        minans = min(minans, ans);
    }

    if (minans == INF)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << minans << "\n";
    }

    return 0;
}