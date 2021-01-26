#include <iostream>
#include <algorithm>
using namespace std;

int D[3][2], N, a[3][100001], num;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        D[i][0] = a[i][0];
    }

    for (int i = 1; i < N; i++)
    {

        D[0][1] = a[0][i] + max(D[0][0], D[1][0]);
        D[1][1] = a[1][i] + max(D[0][0], max(D[1][0], D[2][0]));
        D[2][1] = a[2][i] + max(D[1][0], D[2][0]);

        D[0][0] = D[0][1];
        D[1][0] = D[1][1];
        D[2][0] = D[2][1];
    }
    int DMax = max(D[0][0], max(D[1][0], D[2][0]));


    for(int i = 0; i<3; i++){
        D[i][0] = a[i][0];
    }

    for (int i = 1; i < N; i++)
    {
        D[0][1] = a[0][i] + min(D[0][0], D[1][0]);
        D[1][1] = a[1][i] + min(D[0][0], min(D[1][0], D[2][0]));
        D[2][1] = a[2][i] + min(D[1][0], D[2][0]);

        D[0][0] = D[0][1];
        D[1][0] = D[1][1];
        D[2][0] = D[2][1];
    }

    int DMin = min(D[0][0], min(D[1][0], D[2][0]));

    cout << DMax << " " << DMin << "\n";
    return 0;
}

