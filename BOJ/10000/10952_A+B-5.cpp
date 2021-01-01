#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;

    while (1)
    {
        cin >> a >> b;
        if (a + b == 0)
            break;
        cout << a + b << "\n";
    }
    return 0;
}