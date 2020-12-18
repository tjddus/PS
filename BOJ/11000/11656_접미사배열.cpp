#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

vector<string> str;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        str.push_back(s.substr(i));
    }

    sort(str.begin(), str.end());

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << "\n";
    }
}
