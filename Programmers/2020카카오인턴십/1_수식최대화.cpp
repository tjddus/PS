#include <bits/stdc++.h>

using namespace std;

long long solution(string expression)
{
    long long answer = 0;
    string prior[6][3] = {{"*", "-", "+"}, {"*", "+", "-"}, {"+", "*", "-"}, {"+", "-", "*"}, {"-", "+", "*"}, {"-", "*", "+"}};
    vector<string> expre;

    int pos = 0;
    for (int i = 0; i < expression.size(); i++)
    {
        if (strchr("*+-", expression[i]))
        {
            expre.push_back(expression.substr(pos, i - pos));
            expre.push_back(expression.substr(i, 1));
            pos = i + 1;
        }
    }
    expre.push_back(expression.substr(pos));



    for (int i = 0; i < 6; i++)
    {
        vector<string> v(expre);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < v.size();)
            {
                if (v[k].compare(prior[i][j]) == 0)
                {
                    long long a = stoll(v[k - 1]);
                    long long b = stoll(v[k + 1]);
                    if (prior[i][j].compare("*") == 0)
                    {
                        v[k - 1] = to_string(a * b);
                    }
                    else if (prior[i][j].compare("+") == 0)
                    {
                        v[k - 1] = to_string(a + b);
                    }
                    else
                    {
                        v[k - 1] = to_string(a - b);
                    }
                    v.erase(v.begin() + k, v.begin() + k + 2);
                }
                else
                {
                    k++;
                }
            }
        }
        answer = max(abs(stoll(v[0])), answer);
    }

    return answer;
}
