#include <iostream>
#include <queue>
using namespace std;

int is_Prime[100001] = {0, 1, 0,};

int main()
{
    int T, n, inputMax = 0;
    queue<int> q;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        q.push(n);
        if (inputMax < n)
            inputMax = n;
    }

    for (int i = 2; i <= inputMax; i++)
    {
        for (int j = i + i; j <= inputMax; j += i)
        {
            if (is_Prime[j] == 0)
                is_Prime[j] = 1;
        }
    }

    while (!q.empty())
    {
        int v = q.front(), min, max;
        for (int i = v / 2; i > 1; i--)
        {
            if (is_Prime[i] == 0 && is_Prime[v-i] == 0){
                cout << i << " " << v-i << "\n";
                break;
            }
        }
        q.pop();
    }

    return 0;
}