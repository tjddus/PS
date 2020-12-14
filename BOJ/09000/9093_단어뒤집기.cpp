#include <iostream>
#include <stack>
#include <string>
using namespace std;

// #1 처음 Queue로 짠 코드 (시간: 444ms)
/*
int main()
{
    int T;
    cin >> T;
    char str[1];
    cin.getline(str, 1);
    while (T--)
    {
        char c[10000] = {0};
        queue<int> q;
        int size;
        q.push(-1);
        cin.getline(c, 1000);
        size = strlen(c);
        for (int i = 0; i < size; i++)
        {
            if (c[i] == ' ')
                q.push(i);
        }
        q.push(size);
        while (q.size() != 1)
        {
            int first = q.front();
            q.pop();
            for (int i = q.front()-1; i > first; i--)
                cout << c[i];
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
*/


//#2 Stack으로 짠 코드(시간: 44ms)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        stack<char> s;
        string str;
        int cnt = 0;

        getline(cin, str);
        str += '\n';
        for (char chr : str)
        {
            if (chr != '\n' && chr != ' ')
            {
                s.push(chr);
            }
            else{
                while (!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

//geline()의 경우 테스트케이스 갯수를 쓰고 엔터를 쳤을 경우 "\n"을 바로 받아버리기 때문에
//for문 들어가기전 미리 한번 받아줌

//for (element_declaration : array)
// statement;
