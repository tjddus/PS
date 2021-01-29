#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_N 2501

int M, a[51], K;
double ans = 1, result = 0, total;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    cin >> K;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            ans *= (double)(a[i] - j) / (total - j);
        }
        result += ans;
        ans = 1;
    }

    cout << fixed << setprecision(18) << result << "\n";
    return 0;
}