#include <iostream>
using namespace std;

long long X, Y, R = 0, Z = 0;
int ans;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> X >> Y;
    if (Y != 0)
        R = (Y * 100) / X;

    if (R >= 99)
    {
        cout << -1 << "\n";
        return 0;
    }

    int low = 0, high = X;
    while (low <= high)
    {
        Z = (low + high) / 2;
        if ((Y + Z) * 100 / (X + Z) > R)
        {
            high = Z - 1;
        }
        else
            low = Z + 1;
    }

    cout << low << "\n";

    return 0;
}
//# 정렬된 배열에 어떤 값을 찾고 싶다 하면 "이분탐색"
//# a - b 범위에서 while문을 돌면서 ++ 연산을 진행할 경우 high 값을 지정해서 "이분탐색"