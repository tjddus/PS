#include <iostream>
#include <iomanip>
#include <stack>
using namespace std;

pair<int, int> p[27];
stack<double> s;
double a, b, res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cin.ignore();
    string str;
    getline(cin, str);

    for (int i = 1; i <= N; i++)
    {
        int n;
        cin >> n;
        p[i].first = i + 64;
        p[i].second = n;
    }

    for (char ch : str)
    {

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();

            if (ch == '+')
            {
                res = a + b;
            }
            else if (ch == '-')
            {
                res = a - b;
            }
            else if (ch == '*')
            {
                res = a * b;
            }
            else if (ch == '/')
            {
                res = a / b;
            }
            s.push(res);
        }
        else
        {
            for (int i = 1; i <= N; i++)
            {
                if((int)ch == p[i].first){
                    s.push(p[i].second);
                    break;
                }
            }
        }
    }

    cout << fixed << setprecision(2) << s.top() << "\n";
    return 0;
}


// int, float, double >> 나누는 연산이 있을 시 float 보다는 double로 최대한 변수 설정