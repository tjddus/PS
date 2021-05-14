#include <bits/stdc++.h>
using namespace std;

#define MAX_N 105
#define INF 999999
int dp[MAX_N][MAX_N][205][2];
int mapsA[MAX_N][MAX_N] = {0,};
int mapsB[MAX_N][MAX_N] = {0, };

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int M, N, L, G;
        cin >> M >> N >> L >> G;
        memset(mapsA, 0, sizeof(mapsA));
        memset(mapsB, 0, sizeof(mapsB));
        memset(dp, 0x2f, sizeof(dp));

        for (int i = 0; i < M; i++)
        {
            for (int j = 1; j < N; j++)
            {
                cin >> mapsA[i][j];
            }
        }

        for (int i = 1; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> mapsB[i][j];
            }
        }

        dp[0][1][0][0] = mapsA[0][1];
        dp[1][0][0][1] = mapsB[1][0];


        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                for (int k = 0; k < 205; k++)
                {
                    dp[i][j+1][k][0] = min(dp[i][j+1][k][0], dp[i][j][k][0] + mapsA[i][j+1]);
                    dp[i+1][j][k][1] = min(dp[i+1][j][k][1], dp[i][j][k][1] + mapsB[i+1][j]);
                    dp[i][j+1][k+1][0] = min(dp[i][j+1][k+1][0], dp[i][j][k][1] + mapsA[i][j+1]);
                    dp[i+1][j][k+1][1] = min(dp[i+1][j][k+1][1], dp[i][j][k][0] + mapsB[i+1][j]);
                }
            }
        }

        int answer = INF;
        for(int k = 0; k < 205; k++){
            if(dp[M-1][N-1][k][0] <= G){
                answer = min(answer, (N+M-2) * L +k);
            }
            if(dp[M-1][N-1][k][1] <= G){
                answer = min(answer, (N+M-2) * L +k);
            }
        }

        if(answer == INF) cout << -1 << "\n";
        else cout << answer << "\n";
    }
    return 0;
}