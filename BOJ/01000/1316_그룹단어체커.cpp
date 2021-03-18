#include <iostream>
#include <cstring>
using namespace std;

int n, ans, num, flag = 1;
char cc[30];
string s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        flag = 1;
        memset(cc, 0, sizeof(cc));
        for (int j = 0; j < s.size(); j++)
        {

            if (i != s.size() - 1)
            {
                if (s[j] != s[j + 1])
                {
                    if (cc[s[j] - 'a'] == 0)
                    {
                        cc[s[j] - 'a'] = 1;
                    }
                    else
                    {
                        flag = 0;
                    }
                }
            }
            else
            {
                if (cc[s[j] - 'a'] == 1)
                    flag = 0;
            }
        }
        if (flag)
        {
            ++ans;
        }
    }

    cout << ans << "\n";

    return 0;
}