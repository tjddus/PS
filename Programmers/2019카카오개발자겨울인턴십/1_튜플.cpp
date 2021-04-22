#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second < b.second)
        return false;
    return true;
}

vector<int> solution(string s)
{
    vector<int> answer;
    map<int, int> m;
    string tmp;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            tmp += s[i];
        }
        else
        {
            if (tmp.size() != 0)
            {
                m[stoi(tmp)]++;
                tmp.clear();
            }
        }
    }

    vector<pair<int, int> > vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < vec.size(); i++) answer.push_back(vec[i].first);
    return answer;
}