#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, cnt = 0;
    int coin[6] = {500, 100, 50, 10, 5, 1};

    cin >> N;
    N = 1000 - N;

    for(int i =0; i<6; i++){
        cnt += N / coin[i];
        N = N % coin[i];
    }

    cout << cnt;
}