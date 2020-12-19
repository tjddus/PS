#include <iostream>
using namespace std;

int arr[101] = {};
int GCD(int A, int B)
{
    if (B == 0)
        return A;
    return GCD(B, A % B);
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, gcd;
        long long sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (arr[i] > arr[j])
                    gcd = GCD(arr[i], arr[j]);
                else
                    gcd = GCD(arr[j], arr[i]);
                sum += gcd;
            }
        }
        cout << sum << "\n";
    }

    return 0;
}

// #1 틀렸습니다
/*
    변수 범위 확인 주의 <int, long long> => 헷갈린다 싶으면 최대한 long long
*/