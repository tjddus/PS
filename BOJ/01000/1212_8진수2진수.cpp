#include <iostream>
#include <cmath>
using namespace std;

string s, res;
int N, temp;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    for (char ch : s)
    {
        N = ch - '0';
        for (int i = 2; i >= 0; i--)
        {
            temp = pow(2, i);
            if (N / temp == 1)
            {
                res += '1';
                N -= temp;
            }
            else
            {
                res += '0';
            }
        }
    }

    while (res[0] != '1' && res.compare("0") != 0)
        res = res.substr(1);

    cout << res;
    return 0;
}