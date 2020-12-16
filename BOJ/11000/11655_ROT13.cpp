#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    char c;
    int res;
    getline(cin, str);

    for (char ch : str)
    {
        if (65 <= (int)ch && (int)ch < 91)
        {
            res = (int)ch + 13;
            if (res > 90)
                cout << (char)(res - 26);
            else
                cout << (char)res;
        }
        else if (97 <= (int)ch && (int)ch < 123)
        {
            res = (int)ch + 13;
            if (res > 122)
                cout << (char)(res - 26);
            else
                cout << (char)res;
        }
        else
        {
            cout << ch;
        }
    }
}