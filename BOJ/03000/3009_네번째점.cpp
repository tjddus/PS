#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, resX, resY;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if (x1 == x2)
        resX = x3;
    else if (x1 == x3)
        resX = x2;
    else if (x2 == x3)
        resX = x1;

    if (y1 == y2)
        resY = y3;
    else if (y1 == y3)
        resY = y2;
    else if (y2 == y3)
        resY = y1;

    cout << resX << " " << resY << "\n";
    return 0;
}