#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, r1, x2, y2, r2, T, res;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        float d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

        if (d == 0 && r1 - r2 == 0)
            res = -1;
        else
        {
            if (abs(r1 - r2) < d && d < r1 + r2)
                res = 2;
            else if (abs(r1 - r2) == d || r1 + r2 == d)
                res = 1;
            else
                res = 0;
        }
        cout << res << "\n";
    }
    return 0;
}