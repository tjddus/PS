#include <iostream>
using namespace std;

int main()
{
    int T, x, y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x >> y;
        cout << x + y << "\n";
    }
    return 0;
}