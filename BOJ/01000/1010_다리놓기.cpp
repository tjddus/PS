#include <iostream>
using namespace std;

int T, N, M;
long long combi[31][31];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1; i <= 30; i++){
        combi[i][0] = combi[i][i] = 1;
        for(int j = 1; j < i; j++) combi[i][j] = combi[i-1][j-1] + combi[i-1][j];
    }


    cin >> T;
    while(T--){
        cin >> N >> M;
        cout << combi[M][N] << "\n";
    }

    return 0;
}