#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
string s;
int currentDir = 0, cnt = 0; // left = 0, right = 1

int main()
{
    getline(cin, s);
    for (char ch : s)
    {
        if (ch == '(')
        {
            v.push_back(0);
            currentDir = 0;
        }
        if (ch == ')')
        {
            if (currentDir == 0)
            {
                v.pop_back();
                for (int i = 0; i < v.size(); i++)
                {
                    v[i] += 1;
                }
            }
            else
            {
                cnt += (v.back() + 1);
                v.pop_back();
            }
            currentDir = 1;
        }
    }
    cout << cnt << "\n";
    return 0;
}

