#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int dis[3];
    while (1)
    {
        cin >> dis[0] >> dis[1] >> dis[2];
        if ((dis[0] == 0) && (dis[1] == 0) && (dis[2] == 0))
            break;
        sort(dis, dis + 3);
        if (dis[2] == sqrt(dis[0] * dis[0] + dis[1] * dis[1]))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }

    return 0;
}