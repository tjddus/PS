#include <iostream>
using namespace std;

#define MAX_N 100005

int n, m, sum[MAX_N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;

        sum[i] = (i == 1) ? num : sum[i - 1] + num;
    }

    for(int i = 0; i<m; i++){
        int s, e;
        cin >> s >> e;
        cout << sum[e] - sum[s-1] << "\n";
    }

    return 0;
}