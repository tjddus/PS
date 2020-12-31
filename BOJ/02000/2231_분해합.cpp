#include <iostream>
#include <algorithm>
using namespace std;

int n, temp, result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= 1000000; i++)
    {
        temp = i;
        while (temp > 0)
        {
            result += temp % 10;
            temp /= 10;
        }
        if (result + i == n){
            result = i;
            break;
        }
        else
            result = 0;
    }

    cout << result << "\n";
    return 0;
}