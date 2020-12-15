#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int T, cnt = 0;
    stack<int> s;
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        if (x != 0)
            s.push(x);
        else
            s.pop();
    }

    while (!s.empty())
    {
        cnt += s.top();
        s.pop();
    }
    cout << cnt << "\n";
}