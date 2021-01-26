#include <iostream>

using namespace std;

int n, m, sum = 0, ans = 0, nos[10001];
int i, s = 0, e = -1; // 투포인트

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n>> m;
    for (int i = 0; i < n; i++)
        cin >> nos[i];

    while (e < n)
    {
        if (sum < m)
        {
            ++e;
            sum += nos[e];
        }
        else if (sum == m)
        {
            ++ans;
            sum -= nos[s];
            ++s;
        }
        else
        {
            sum -= nos[s];
            ++s;
        }
    }

    cout << ans;
    return 0;
}