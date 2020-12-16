#include <iostream>
using namespace std;

int main()
{
    string str;
    int alp[27];
    cin >> str;

    for (int i = 1; i <= 26; i++)
    {
        alp[i] = 0;
    }
    for (char ch : str)
    {
        for (int i = 1; i <= 26; i++)
        {
            if (i == (int)ch - 96)
                alp[i] += 1;
        }
    }

    for(int i = 1; i<=26; i++){
        cout << alp[i] << " ";
    }
}