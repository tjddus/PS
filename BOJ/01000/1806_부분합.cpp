#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100000001

int N, S;
int a[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> a[i];

    int s = 0, e = -1, sum = 0, ans = MAX;

    while (e < N)
    {
        if (sum < S)
        {
            ++e;
            sum += a[e];
        }
        else{
            ans = min(ans, e - s + 1);
            sum -= a[s];
            ++s;
        }
    }

    if(ans >= MAX)
        cout << 0 << "\n";
    else
        cout << ans << "\n";

    return 0;
}