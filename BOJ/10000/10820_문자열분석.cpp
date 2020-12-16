#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    while (getline(cin, str))
    {
        int largeAlp = 0, smallAlp = 0, num = 0, blank = 0;
        for (char ch : str)
        {
            if (65 <= (int)ch && (int)ch <= 91)
                largeAlp++;
            else if (97 <= (int)ch && (int)ch <= 123)
                smallAlp++;
            else if (ch == ' ')
                blank++;
            else
                num++;
        }
        cout << smallAlp << " " << largeAlp << " " << num << " " << blank << "\n";
    }
    return 0;
}
