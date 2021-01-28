#include <iostream>
#include <cmath>
using namespace std;


int flag[1000000], n = 1, fflag;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 2; i <= sqrt(1000000); i++)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            if (flag[j] == 0){
                flag[j] = 1;
            }
        }
    }

    while (n)
    {
        cin >> n;
        for (int i = 2; i < n; i++)
        {
            if (flag[i] == 0 && flag[n - i] == 0){
                cout << n << " = " << i << " + " << n - i << "\n";
                fflag = 1;
                break;
            }
        }
    }
    if(fflag == 0){
        cout << "Goldbach's conjecture is wrong.";
    }
    return 0;
}

// #1 - #4 시간초과 에러
/*
    시간 초과 에러가 계속 나길래 질문 검색을 해보았는데 cin, cout의 시간이 오래 걸리는 경우 
    오류가 날 수 있어서 scanf, printf로 바꾸어 입출력을 진행하였다.

    에라토스테네스의 체 ( sqrt )
*/