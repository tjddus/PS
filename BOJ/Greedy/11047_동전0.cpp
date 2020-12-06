#include <iostream>
using namespace std;

int N, K;
int A[10];
int total();

int main()
{
    scanf("%d %d", &N, &K);
    for(int i =0; i<N; i++){
        scanf("%d", &A[i]);
    }

    printf("%d", total());
    return 0;
}

int total(){
    int cnt = 0;
    for(int i =N-1; i>=0; i--){
        cnt += K / A[i];
        K = K % A[i];
    }   
    return cnt;
}