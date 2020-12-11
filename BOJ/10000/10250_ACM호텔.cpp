#include <iostream>

using namespace std;

int main()
{
    int N, H, W, num, resH, resW;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> H >> W >> N;
        if(N%H == 0){
            resH = H;
            resW = (N / H);
        }else{
            resH = (N % H);
            resW = (N / H) + 1;
        }

        cout << resH * 100 + resW << "\n";
    }
    return 0;
}