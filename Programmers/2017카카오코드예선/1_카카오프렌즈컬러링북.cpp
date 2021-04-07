#include <bits/stdc++.h>

#include <vector>

using namespace std;

int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};

int BFS(int m, int n, int (*visited)[105], vector<vector<int> > picture, queue<pair<int, int> > q)
{
    int ans = 1;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < m && 0 <= ny && ny < n && picture[nx][ny] == picture[x][y] && visited[nx][ny] == 0)
            {
                ++ans;
                visited[nx][ny] = 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    return ans;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int> > picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int visited[105][105];
    queue<pair<int, int> > q;
    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == 1 || picture[i][j] == 0)
                continue;
            q.push(make_pair(i, j));
            visited[i][j] = 1;
            int count = BFS(m, n, visited, picture, q);
            max_size_of_one_area = max(max_size_of_one_area, count);
            ++number_of_area;
        }
    }

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}
