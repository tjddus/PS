#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string s, temp, res;
int quo, rem, result = 0;

int main()
{
    cin >> s;
    quo = s.size() / 3;
    if ((s.size() % 3) != 0)
        quo++;

    while (s.size() % 3 != 0)
    {
        s = '0' + s;
    }

    for (int i = 0; i < quo; i++)
    {
        temp = s.substr(3 * i, 3);
        for (int j = 0; j < 3; j++)
        {
            if (temp[j] == '1')
            {
                result += pow(2, (2 - j));
            }
        }
        cout << result;
        result = 0;
    }

    return 0;
}
