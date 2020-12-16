#include <iostream>
#include <stack>
using namespace std;

string str;
stack<char> s;
int isReverse = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    getline(cin, str);
    str += '\n';

    for (char ch : str)
    {
        if (ch == '<')
            isReverse = 0;

        if (isReverse == 0)
            if(ch == '<'){
                while (!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            }
            else
                cout << ch;
        else if(isReverse == 1)
        {
            if (ch == ' ' || ch == '\n')
            {
                while (!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << " ";
            }
            else{
                s.push(ch);
            }
        }

        if (ch == '>')
            isReverse = 1;
    }

    return 0;
}