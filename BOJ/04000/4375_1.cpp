#include <iostream>
#include <cmath>
using namespace std;


int main()
{

    int n;
    while (cin >> n)
    {
        int temp = 1, ans = 1;
        while (temp % n != 0)
        {
            temp = temp * 10 + 1;
            ans++;
            temp = temp % n;
        }
        cout << ans << "\n";
    }

    return 0;
}