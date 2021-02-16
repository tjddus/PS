#include <iostream>
#include <set>
#include <string>
using namespace std;

int M;
set<int> s;
set<int>::iterator iter;

void SET(string ordType)
{
    int num;
    if (ordType.compare("add") == 0)
    {
        cin >> num;
        s.insert(num);
    }
    else if (ordType.compare("remove") == 0)
    {
        cin >> num;
        s.erase(num);
    }
    else if (ordType.compare("check") == 0)
    {
        cin >> num;
        iter = s.find(num);
        if (iter == s.end())
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    else if (ordType.compare("toggle") == 0)
    {
        cin >> num;
        iter = s.find(num);
        if (iter == s.end())
            s.insert(num);
        else
            s.erase(num);
    }
    else if (ordType.compare("all") == 0)
    {
        for (int i = 1; i <= 20; i++)
        {
            s.insert(i);
        }
    }
    else if (ordType.compare("empty") == 0)
    {
        s.clear();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> M;
    while (M--)
    {
        string ordType;
        cin >> ordType;
        SET(ordType);
    }

    return 0;
}