#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    while (1)
    {
        string str;
        int res = 1;
        stack<int> s;
        getline(cin, str);
        if (str.compare(".") == 0)
            break;
        for (char ch : str)
        {
            if (ch == '(')
            {
                s.push(ch);
            }
            else if (ch == '[')
            {
                s.push(ch);
            }
            else if (ch == ')')
            {
                if (!s.empty() && s.top() == '(')
                    s.pop();
                else{
                    res = 0;
                    break;
                }
            }
            else if (ch == ']')
            {
                if (!s.empty() && s.top() == '[')
                    s.pop();
                else{
                    res = 0;
                    break;
                }
            }
        }
        if (s.empty() && res)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}