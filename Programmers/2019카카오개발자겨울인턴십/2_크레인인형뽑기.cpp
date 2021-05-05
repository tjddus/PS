#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int> > board, vector<int> moves)
{
    int answer = 0, N = board[0].size();

    stack<int> Tboard[32];
    stack<int> ans;
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j > -1; j--)
        {
            if (board[j][i] != 0)
                Tboard[i + 1].push(board[j][i]);
        }
    }

    for (int i = 0; i < moves.size(); i++)
    {
        if (!Tboard[moves[i]].empty())
        {
            if (!ans.empty() && ans.top() == Tboard[moves[i]].top())
            {
                ans.pop();
                Tboard[moves[i]].pop();
                answer += 2;
            }
            else
            {
                ans.push(Tboard[moves[i]].top());
                Tboard[moves[i]].pop();
            }
        }
    }

    return answer;
}