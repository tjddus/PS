#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0, 0, 1, 1}, dy[4] = {0, 1, 0, 1};

int solution(int m, int n, vector<string> board)
{
    int answer = 0, cnt = -1;

    while (1)
    {
        vector<bool> check[30];
        bool flag = false;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                check[i].push_back(false);
            }
        }


        for(int i = 0; i<m-1; i++){
            for(int j = 0; j<n-1; j++){
                if(board[i][j] == '0') continue;
                char memory = board[i][j];
                if(memory == board[i][j+1] && memory == board[i+1][j] && memory == board[i+1][j+1]){
                        check[i][j] = check[i][j+1] = check[i+1][j] = check[i+1][j+1] = true;
                        flag = true;
                }
            }
        }

        if(!flag) break;

        for(int i = 0; i<m; i++){
            for(int j =0; j<n; j++){
                if(check[i][j] == true){
                    answer++;
           
                    for(int k = i; k > 0; k--){
                        board[k][j] = board[k-1][j];
                    }
                    board[0][j] = '0';
                }
            }
        }
    }

    cout << answer;

    return answer;
}