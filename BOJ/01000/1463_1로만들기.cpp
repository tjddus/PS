#include <iostream>
#include <algorithm>
using namespace std;

int goOne[10000001] = {};

int main()
{
    int n;
    cin >> n;
    
    goOne[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (goOne[i] == 0)
        {
            goOne[i] = goOne[i - 1] + 1;
            if (i % 3 == 0)
            {
                goOne[i] = min(goOne[i], goOne[i / 3] + 1);
            }
            if (i % 2 == 0)
            {
                goOne[i] = min(goOne[i], goOne[i / 2] + 1);
            }
        }
    }
    cout << goOne[n] << "\n";
}

// algorithm의 min, max 내장 함수를 쓰게 되면 코드를 더 깔끔하게 작성할 수 있다.
// 코드를 지저분하게 작성하지 않도록 주의