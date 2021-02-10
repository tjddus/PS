#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 25

int N, d[MAX_N], T[MAX_N], P[MAX_N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> T[i] >> P[i];
    }

    for (int i = N; i >= 1; i--)
    {
        if(i + T[i] > N + 1) d[i] = d[i+1];
        else{
            d[i] = max(d[i+1], d[i + T[i]] + P[i]);
        }   
    }

    cout << d[1] << "\n";
    return 0;
}

/* 세그멘테이션 결함(Segmentation Fault)

세그멘테이션 결함을 주의하자. 
d[i + T[i]] 에서 i가 15이고 T[i] = 5 인 경우 단순히 MAX_N을 16으로 하게 될 경우 접근이 불가능해서 오류가 날 수 있음. 
*/

