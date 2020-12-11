#include <iostream>
using namespace std;

int main()
{
    int year, res = 0;
    cin >> year;

    if (year % 4 == 0)
    {
        if (!(year % 100 == 0) || (year % 400 == 0))
            res = 1;
    }
    cout << res;
}