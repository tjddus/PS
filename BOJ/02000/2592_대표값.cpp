#include <iostream>
#include <algorithm>
using namespace std;

int a[11], sum, nx, cnt = 1, c = 1, ans;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + 10);
    nx = ans = a[0];
    
    for (int i = 1; i < 10; i++)
    {
        if(nx == a[i]){
            c++;
            if(cnt < c){
                ans = a[i];
                cnt = c;
            }
        }else{
            nx = a[i];
            c = 1;
        }
    }

    cout << (sum / 10) << "\n" << ans << "\n";
    return 0;
}