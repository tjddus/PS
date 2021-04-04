#include <bits/stdc++.h>
using namespace std;

int checkCount(vector<vector<int> > needs, vector<int> v, int r)
{
    int cnt = needs.size();
    for (int i = 0; i < needs.size(); i++)
    {
        for (int j = 0; j < needs[i].size(); j++)
        {
            if (needs[i][j] == 1 && find(v.begin(), v.end(), j) == v.end())
            {
                cnt--;
                break;
            }
        }
    }

    return cnt;
}

int Solution(vector<vector<int> > needs, int r)
{
    int n = needs[0].size();
    int answer = 0;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(i);
    }

    vector<int> tempVector;
    for (int i = 0; i < r; i++)
    {
        tempVector.push_back(1);
    }
    for (int i = 0; i < v.size() - r; i++)
    {
        tempVector.push_back(0);
    }
    sort(tempVector.begin(), tempVector.end());

    do
    {
        vector<int> vv;

        for (int i = 0; i < tempVector.size(); i++)
        {
            if (tempVector[i] == 1)
            { // 실제값 출력
                vv.push_back(v[i]);
            }
        }
        answer = max(checkCount(needs, vv, r), answer);

    } while (next_permutation(tempVector.begin(), tempVector.end()));

    return answer;
}