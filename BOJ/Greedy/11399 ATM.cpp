#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int num;
    long long int res = 0;
    int P[1000] = {};

    scanf("%d", &num);
    for(int i =0; i<num; i++){
        scanf("%d", &P[i]);
    }

    sort(P, P + num);
    for(int i = 0; i<num; i++){
        res += (P[i] * (num - i));
    }

    printf("%lld\n", res);
    return 0;
}

// 동적할당
// int* P;
// P = (int*)malloc(sizeof(int) * num); free(P);

// int* P = new int[num];
// delete[] P;