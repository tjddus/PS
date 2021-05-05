#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second > b.second)
        return true;
    return false;
}

vector<string> solution(vector<string> orders, vector<int> course)
{
    vector<string> answer;
    map<string, int> map;
    int ccheck[15] = {
        0,
    };

    for (int i = 0; i < orders.size(); i++)
    {
        int cursize = orders[i].size();
        sort(orders[i].begin(), orders[i].end());
        for (int j = 0; j < course.size(); j++)
        {
            vector<int> ind;
            if (cursize >= course[j])
            {
                for (int k = 0; k < cursize; k++)
                {
                    if (k < course[j])
                        ind.push_back(1);
                    else
                        ind.push_back(0);
                }

                sort(ind.begin(), ind.end());

                do
                {
                    string s;
                    for (int k = 0; k < ind.size(); k++)
                    {
                        if (ind[k] == 1)
                        {
                            s += orders[i][k];
                        }
                    }
                    if (map.find(s) != map.end())
                        map[s]++;
                    else
                        map[s] = 1;
                } while (next_permutation(ind.begin(), ind.end()));
            }
        }
    }

    vector<pair<string, int> > v(map.begin(), map.end());
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        if ((ccheck[v[i].first.size()] == 0 || ccheck[v[i].first.size()] == v[i].second) && v[i].second > 1)
        {
            answer.push_back(v[i].first);
            ccheck[v[i].first.size()] = v[i].second;
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    vector<string> orders = {"XYZ", "XWY", "WXA"};
    vector<int> course = {2, 3, 4};
    solution(orders, course);
    return 0;
}