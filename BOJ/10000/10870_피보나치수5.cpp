#include <iostream>
using namespace std;

int Pibonacci(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return Pibonacci(n - 1) + Pibonacci(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << Pibonacci(n);
    return 0;
}