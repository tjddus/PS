#include <iostream>
using namespace std;

int main()
{
    string str;
    int alp[27], num = 0;
    cin >> str;

    for (int i = 1; i <= 26; i++)
    {
        alp[i] = -1;
    }
    for (char ch : str)
    {
        for (int i = 1; i <= 26; i++)
        {
            if (i == (int)ch - 96)
            {
                if (alp[i] == -1)
                    alp[i] = num;
            }
            else
                continue;
        }
        num++;
    }

    for (int i = 1; i <= 26; i++)
    {
        cout << alp[i] << " ";
    }
}