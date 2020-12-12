#include <iostream>
#include <cmath>
using namespace std;
int arr[1000001];

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    arr[1] = 1;
    cin >> M >> N;

    for (int i = 2; i <= N; i++)
    {
        for (int j = i + i; j <= N; j += i)
        {
            if (arr[j] == 0)
                arr[j] = 1;
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (arr[i] == 0)
            cout << i << "\n";
    }
    return 0;
}

/*
int main()
{
    int M, N;
    cin >> M >> N;
    while (M <= N)
    {
        int isPrime = 1;
        if (M == 1)
            isPrime = 0;
        if ((M != 2) && (M != 3) && (M != 5) && (M != 7))
        {
            if ((M % 2 == 0) || (M % 3 == 0) || (M % 5 == 0) || (M % 7 == 0))
                isPrime = 0;
            else
            {
                for (int i = 11; i <= sqrt(M); i++)
                {
                    if (M % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
            }
        }
        if (isPrime)
        {
            cout << M << "\n";
        }
        M++;
    }
    return 0;
}
*/

/*
#1 첫번째 풀이
    1) 배열 X
    2) 2, 3, 5, 7의 배수 우선 제거
    3) 11의 수부터 마지막 수까지 돌면서 본인의 값에 루트에 해당하는 범위 전까지 소수인지 검사
    => 코드가 너무 더럽고, 시간은 420ms 걸림 (최대한 시간에 맞게 때려맞춘 코드)

#2 두번째 풀이
    1) 배열 O
    2) 2 - N까지 돌면서  2+2(+2+2+2..), 3+3(+3+3+3..), 5+5(+5+5+5...), 7+7(+7+7+7...) 계속 i+i 부터 시작해서 i를 더해나가면서 돔
    3) 결국엔 #1과 다른 점은 앞선 풀이는 숫자마다 루트까지의 일일이 다 나눠줘야함 
    4) 두번째 풀이는 미리 배열에 2, 3, 5, 7의 배수부터 차근차근 소수를 따지고 마지막에 배열 출력
*/
