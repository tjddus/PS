#include <iostream>
using namespace std;

int n;
long long a[1000001] = {0, 1, 2,};

#define MOD 15746

int main()
{
    cin >> n;
    for(int i =3; i<=n; i++){
        a[i] = (a[i-1] + a[i-2]) % MOD;
    }

    cout << a[n] % MOD <<"\n";
    return 0;
}
