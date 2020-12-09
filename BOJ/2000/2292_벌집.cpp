#include <iostream>
using namespace std;

int main(){
    int n, total = 1;
    cin >> n;
    for(int i=0; ; i++){
        if(n <= total){
            cout << i+1 << "\n";
            break;
        }
        total += 6 * (i + 1);
    }
    return 0;
}