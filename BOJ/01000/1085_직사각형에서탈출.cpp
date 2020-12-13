#include <iostream>
using namespace std;

int main(){
    int x, y, w, h, minDis = 0;
    cin >> x >> y >> w >> h;
    minDis = x-0;
    if(minDis > (y-0))
        minDis = y-0;
    if(minDis > (w-x))
        minDis = w-x;
    if(minDis > (h-y))
        minDis = h-y;

    cout << minDis << "\n";
}