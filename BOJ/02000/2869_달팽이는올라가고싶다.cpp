#include <iostream>
using namespace std;

int main(){
    int A, B, V;
    cin >> A >> B >> V;

    if(((V-B) % (A-B)) == 0)
        cout << (V - B) / (A - B) << "\n";
    else
        cout << ((V - B) / (A - B)) + 1 << "\n";

    return 0;
}