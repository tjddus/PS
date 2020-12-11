#include <iostream>
using namespace std;

int main(){
    int H, M, resH, resM;
    cin >> H >> M;
    if(M >= 45){
        resH = H;
        resM = M - 45;
    }else{
        resH = H-1;
        if(resH < 0){
            resH = 24 + resH;
        }
        resM = 15 + M;
    }
    cout << resH << " " << resM;
    return 0;
}