#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, gcd;
        cin >> A >> B;
        if (A > B){
            gcd = GCD(A, B);
        }
        else 
        {
            gcd =GCD(B, A);
        }
        cout << A * B / gcd << "\n";
    }
    return 0;
}
