#include <iostream>
using namespace std;

int E, S, M, result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> E >> S >> M;
    if (E == 15) E = 0;
    if (M == 19) M = 0;
    for (int i = 0;; i++)
    {
        result = 28 * i + S;
        if (result % 15 == E && result % 19 == M)
            break;
    }

    cout << result << "\n";

    return 0;
}