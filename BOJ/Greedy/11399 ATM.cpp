#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int num, res = 0;
    int P[1000] = {};

    scanf("%d", &num);
    for(int i =0; i<num; i++){
        scanf("%d", &P[i]);
    }

    sort(P, P + num);
    for(int i = 0; i<num; i++){
        res += (P[i] * (num - i));
    }

    printf("%d\n", res);
    return 0;
}