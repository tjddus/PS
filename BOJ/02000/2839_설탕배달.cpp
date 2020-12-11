#include <iostream>
using namespace std;

int main()
{
    int num, mod, na, count = 0;
    cin >> num;
    mod = num / 5;
    na = num % 5;
    if (num == 4 || num == 7)
        cout << -1 << '\n';
    else if (na == 0)
        cout << mod << '\n';
    else if (na == 1)
        cout << mod + 1 << '\n';
    else if (na == 2)
        cout << mod + 2 << '\n';
    else if (na == 3)
        cout << mod + 1 << '\n';
    else if (na == 4)
        cout << mod + 2 << '\n';
}