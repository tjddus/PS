#include <iostream>
#include <algorithm>
using namespace std;

int n, x, a;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a < x)
            cout << a << " ";
    }

    
    return 0;
}