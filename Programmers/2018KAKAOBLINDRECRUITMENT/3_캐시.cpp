#include <bits/stdc++.h>
using namespace std;

int solution(int cacheSize, vector<string> cities)
{
    int answer = 0;
    vector<string> v;
    for (vector<string>::iterator iter = cities.begin(); iter != cities.end(); iter++)
    {
        transform(iter->begin(), iter->end(), iter->begin(), ::tolower);
    }
    v.push_back(cities[0]);

    if (cacheSize == 0)
        answer = (cities.size() - 1) * 5;
    else
    {
        for (int i = 1; i < cities.size(); i++)
        {
            string target = cities[i];
            bool flag = false;
            auto iter = find(v.begin(), v.end(), target);
            if (iter != v.end())
            {
                v.erase(iter);
                v.push_back(target);
                answer += 1;
                flag = true;
            }

            if (!flag)
            {
                answer += 5;
                if (v.size() == cacheSize)
                {
                    v.erase(v.begin());
                }
                v.push_back(target);
            }
        }
    }
    cout << answer + 5;
    return answer + 5;
}

/* 페이지 교체 알고리즘

CPU 계산 시 필요 데이터가 페이지에 있다면 cache hit
CPU 계산 시 필요 데이터가 페이지에 없다면 보조기억장치로부터 데이터를 페이지로 옮긴 후 계산하는 경우는 cache miss이다.

FIFO (First In First Out) 알고리즘
LRU (Least Recently Used) 알고리즘
LFU (Least Frequently Used) 알고리즘
MFU (Most Frequently Used) 알고리즘

LRU는 가장 최근에 사용되지 않은 것을 제거하는 알고리즘이다.
*/