#include <iostream>
using namespace std;

int N, K, t = 1, d = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    if (K > N / 2)
    {
        K = N - K;
    }

    for (int i = 1; i <= K; i++)
    {
        t *= (N - i + 1);
        d *= i;
    }

    cout << t / d << "\n";

    return 0;
}