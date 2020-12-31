#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, cnt = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 666;; i++)
    {
        string s = to_string(i);
        if (s.find("666") != string::npos)
            cnt++;
        if (cnt == n)
        {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}
