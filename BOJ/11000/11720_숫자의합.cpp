#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ans = 0;
    string s;
    cin >> n >> s;

    for (char c : s)
    {
        int num = c - '0';
        ans += num;
    }

    cout << ans << "\n";

    return 0;
}