#include <bits/stdc++.h>
using namespace std;

struct order
{
    int character1;
    int character2;
    int status;
    int amount;
} order[101];

int CharToNum(char c)
{
    if (c == 'A')
        return 1;
    else if (c == 'C')
        return 2;
    else if (c == 'F')
        return 3;
    else if (c == 'J')
        return 4;
    else if (c == 'M')
        return 5;
    else if (c == 'N')
        return 6;
    else if (c == 'R')
        return 7;
    return 8;
}

int solution(int n, vector<string> data)
{
    int answer = 0;
    int locate[9];
    vector<int> v;
    for (int i = 1; i <= 8; i++)
        v.push_back(i);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < data[i].size(); j++)
        {
            order[i].character1 = CharToNum(data[i][0]);
            order[i].character2 = CharToNum(data[i][2]);
            if (data[i][3] == '=')
                order[i].status = 0;
            else if (data[i][3] == '>')
                order[i].status = 1;
            else
                order[i].status = 2;
            order[i].amount = data[i][4] - '0';
        }
    }

    do
    {
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            locate[v[i]] = i + 1;
        }
        for (int j = 0; j < n; j++)
        {
            if (order[j].status == 0) 
            {
                if (abs(locate[order[j].character1] - locate[order[j].character2]) != (order[j].amount + 1))
                    flag = false;
            }
            else if (order[j].status == 1)
            {
                if (abs(locate[order[j].character1] - locate[order[j].character2]) <= (order[j].amount + 1))
                    flag = false;
            }
            else
            {
                if (abs(locate[order[j].character1] - locate[order[j].character2]) >= (order[j].amount + 1))
                    flag = false;
            }
        }

        if (flag)
        {
            ++answer;
        }

    } while (next_permutation(v.begin(), v.end()));
    return answer;
}

int main()
{
    int n = 2;
    vector<string> data = {{"N~F=0"}, {"R~T>2"}};

    cout << solution(n, data);
    return 0;
}