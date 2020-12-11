#include <iostream>
using namespace std;

int main(){
    int n, total=0;
    cin >> n;
    for (int i = 1;; i++){
        total += i;
        if(n <= total){
            if(i%2 == 0){
                cout << i - (total - n) << "/" << 1 + (total - n) << "\n";
            }else
            {
               cout << 1 + (total - n) << "/" << i - (total - n) << "\n";
            }
            break;
        }
    }

    return 0;
}