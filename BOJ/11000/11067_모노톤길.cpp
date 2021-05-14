#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100001

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int m, x, y, lasty = 0;
        vector<int> maps[MAX_N];
        vector<pair<int, int> > answer;

        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            maps[x].push_back(y);
        }

        for (int i = 0; i < MAX_N; i++)
        {
            if(maps[i].empty()) continue;
            sort(maps[i].begin(), maps[i].end());

            if (maps[i][0] == lasty)
            {
                for (int j = 0; j < maps[i].size(); j++)
                    answer.push_back(make_pair(i, maps[i][j]));
                lasty = maps[i][maps[i].size() - 1];
            }
            else
            {
                for (int j = maps[i].size() - 1; j >= 0; j--)
                    answer.push_back(make_pair(i, maps[i][j]));
                lasty = maps[i][0];
            }
        }

        int k, ansNum;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> ansNum;
            cout << answer[ansNum - 1].first << " " << answer[ansNum - 1].second << "\n";
        }
    }

    return 0;
}