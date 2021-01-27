#include <iostream>
#include <stack>
using namespace std;

string str;
stack<char> stk;
int ans = 0, num = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {

        switch (str[i])
        {
        case '(':
            stk.push('(');
            num *= 2;
            break;
        case '[':
            stk.push('[');
            num *= 3;
            break;
        case ')':
            if (stk.empty() || stk.top() != '(')
            {
                cout << 0 << "\n";
                return 0;
            }
            if(str[i-1] == '(') ans += num;
            num /= 2;
            stk.pop();
            break;
        case ']':
            if (stk.empty() || stk.top() != '[')
            {
                cout << 0 << "\n";
                return 0;
            }
            if(str[i-1] == '[') ans += num;
            num /= 3;
            stk.pop();
            break;
        }
    }
        stk.empty()? cout << ans : cout << 0;

    return 0;
}