#include <iostream>
using namespace std;

int main()
{
    int T, x, cnt = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x;
        if(x != 1){
            for (int j = 2; j <= x; j++){
                if(x%j == 0){
                    if(x/j == 1)
                        cnt++;
                    else
                        break;                    
                }
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}