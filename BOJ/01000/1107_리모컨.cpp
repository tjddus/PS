#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, m, button, M[10], cnt = 500000, tempUp, tempDown, flag;
string tempU, tempD;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> button;
        M[button] = 1;
    }

    cnt = abs(n - 100);
    tempUp = n - 1;
    tempDown = n + 1;
    if (m != 10)
    {
        while (1)
        {
            tempUp++;
            tempDown--;
            tempU = to_string(tempUp);
            tempD = to_string(tempDown);
            for (int i = 0; i < tempU.size(); i++)
            {
                if (M[(int)(tempU[i] - '0')] == 1)
                    break;
                else
                {
                    if (i == tempU.size() - 1)
                    {
                        cnt = min(cnt, (int)tempU.size() + abs(tempUp - n));
                        flag = 1;
                    }
                }
            }

            for (int i = 0; i < tempD.size(); i++)
            {
                if (M[(int)(tempD[i] - '0')] == 1)
                    break;
                else
                {
                    if (i == tempD.size() - 1)
                    {
                        cnt = min(cnt, (int)tempD.size() + abs(tempDown - n));
                        flag = 1;
                    }
                }
            }
            if (flag == 1)
                break;
        }
    }

    cout << cnt;
    return 0;
}
