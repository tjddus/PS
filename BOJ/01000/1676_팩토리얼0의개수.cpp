#include <iostream>
using namespace std;

int main()
{
    int a, cnt = 0;
    cin >> a;
    cnt += (a / 125);
    cnt += (a / 25);
    cnt += (a / 5);
    cout << cnt << "\n";
}