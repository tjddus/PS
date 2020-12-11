#include <iostream>
using namespace std;

int main(){
    int T, k, n;
    int A[15][15] = {};
    cin >> T;
    for (int i = 0; i < 15; i++)
    {
        A[0][i] = i;
        A[i][1] = 1;
    }

    for(int i=0; i<T; i++){
        cin >> k >> n;
        for(int i = 1; i<=k; i++){
            for(int j =2; j<=n; j++){
                A[i][j] = A[i - 1][j] + A[i][j - 1];
            }
        }
        cout << A[k][n] << "\n";
    }
    return 0;
}