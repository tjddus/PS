#include <iostream>
#include <cmath>
using namespace std;

#define MAX_N 1001

int N, K, flag[MAX_N], ans = 0, res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    flag[1] = 1;

    for (int i = 2; i <= N; i++)
    {
        for(int j = i; j <= N; j += i){
            if(!flag[j]){
                flag[j] = 1;
                ans++;
                if(ans == K){
                    cout << j << "\n";
                    return 0;
                }
            }
        }
    }
    return 0;
}
