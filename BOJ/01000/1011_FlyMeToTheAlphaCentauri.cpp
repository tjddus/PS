#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T, x, y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x >> y;
        int d = y - x;
        int idx = (int)sqrt(d);
        int differWithDisIdx = d - idx * idx;
        int aroundRes = 2 * idx;

        if (differWithDisIdx == 0)
            cout << aroundRes - 1 << "\n";
        else if (0 < differWithDisIdx && differWithDisIdx <= idx)
            cout << aroundRes << "\n";
        else
            cout << aroundRes + 1 << "\n";
    }
    return 0;
}


/* 백준 (더 나은 소스코드)
int minCount(int d){
    if(d <= pow(ceil(sqrt(d)), 2) - ceil(sqrt(d)))
        cout << 2 * ceil(sqrt(d)) - 2;    
    else
        cout << 2 * ceil(sqrt(d)) - 1;
}
*/

/* 
    1 2 1 = 4 (3)
    1 2 2 1 = 6 (4)
    1 2 3 2 1 = 9 (5)
    1 2 3 3 2 1 = 12 (6)
    1 2 3 4 3 2 1 = 16 (7)
    이런 주기가 바뀐다는 것을 명심 > 시간 초과 유의
*/