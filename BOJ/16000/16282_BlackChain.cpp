#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int ans = 0;
    stack<int> s;

    cin >> n;

    while (n / 2 != 1)
    {
        if (n % 2 == 0)
        {
            s.push(n/2);
            n -= (n / 2);
        }
        else
        {
            s.push(n/2 + 1);
            n -= (n / 2 + 1);
        }
    }

    if (n == 3)
        s.push(2);
    else
        s.push(1);
    s.push(1);

    while (1)
    {
        int stkSize = s.size();
        int oneNum = 0;
        while (s.top() == 1)
        {
            oneNum++;
            s.pop();
        }

        if (stkSize / 2 <= oneNum) {
            ans = stkSize / 2;
            break;
        }
        else{
            int top = s.top();
            s.pop();
            s.push(top - 1);
            s.push(1);
            while(oneNum--) s.push(1);
        }

    }

    cout << ans;
}