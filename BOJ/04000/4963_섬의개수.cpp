#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define MAX_N 55

int a[MAX_N][MAX_N], W, H, visitied[MAX_N][MAX_N], numoftown;
int x[8] = {-1, 0, 1, 0, -1, -1, 1, 1}, y[8] = {0, -1, 0, 1, -1, 1, -1, 1};

void DFS(int X, int Y)
{
    if (a[X][Y] == 1 && visitied[X][Y] == 0)
    {
        visitied[X][Y] = 1;
        for (int i = 0; i < 8; i++)
        {
            int ntX = X + x[i];
            int ntY = Y + y[i];
            if (0 <= ntX && ntX < H && 0 <= ntY && ntY < W && a[ntX][ntY] == 1 && visitied[ntX][ntY] == 0)
                DFS(X + x[i], Y + y[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        cin >> W >> H;
        if (W == 0 && H == 0)
            return 0;
        memset(visitied, 0, sizeof(visitied));
        numoftown = 0;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (visitied[i][j] == 0 && a[i][j] == 1)
                {
                    numoftown++;
                    DFS(i, j);
                }
            }
        }
        cout << numoftown << "\n";
    }

    return 0;
}