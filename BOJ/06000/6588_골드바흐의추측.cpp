#include <iostream>
#include <cmath>
using namespace std;

int primeNumber[1000001] = {};
int main()
{
    primeNumber[1] = 1;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        for (int j = i + i; j <= 1000001; j += i)
        {
            if (primeNumber[j] == 0)
                primeNumber[j] = 1;
        }
    }

    while (1)
    {
        int a;
        scanf("%d", &a);
        if (a == 0)
            break;

        for (int i = 2; i <= a / 2; i++)
        {
            if (primeNumber[i] == 0 && primeNumber[a - i] == 0)
            {
                printf("%d = %d + %d\n", a, i, a - i);
                break;
            }

            if (i == a / 2)
            {
                printf("%s\n", "Goldbach's conjecture is wrong.");
            }
        }
    }
    return 0;
}

// #1 - #4 시간초과 에러
/*
    시간 초과 에러가 계속 나길래 질문 검색을 해보았는데 cin, cout의 시간이 오래 걸리는 경우 
    오류가 날 수 있어서 scanf, printf로 바꾸어 입출력을 진행하였다.

    에라토스테네스의 체 ( sqrt )
*/