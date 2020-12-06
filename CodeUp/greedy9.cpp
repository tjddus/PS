#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

//#2001 최소대금
// int main()
// {
//     int a, b, c, d, e, mina, minb, min;
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//     if(a<b && a<c) mina = a;
//     else if(b<c) mina = b;
//     else mina = c;
//     if(d<e) minb = d;
//     else minb = e;
//     min = mina+minb;
//     printf("%.1f", min * 1.1);
//     return 0;
// }

// //#3120 리모컨
// int main(){
//     int firstT, lastT, tDif, tRem, result = 0;
//     cin >> firstT >> lastT;
//     tDif = lastT - firstT;
//     result += abs(tDif) / 10;
//     tRem = abs(tDif) % 10;
//     if ((tRem == 1) || (tRem == 5))
//         result += 1;
//     else if ((tRem == 2) || (tRem == 4) || (tRem == 6) || (tRem == 9))
//         result += 2;
//     else if((tRem == 3) || (tRem == 7) || (tRem == 8))
//         result += 3;
//     cout << result;
// }

// //#3301 거스름돈 [1]
// int main(){
//     int money, rem , result = 0;
//     cin >> money;
//     while(money > 0){
//         if(money > 50000){
//             result += money / 50000;
//             money = money % 50000;
//         }
//         rem = money % 10;
//         if(rem >= 5) result += (rem - 5 + 1);
//         else result += rem;
//         money = money / 10;
//     }
//     cout << result;
// }

// //#3301 거스름돈 [2]
// int main(){
//     int money[8] = {10, 50, 100, 500, 1000, 5000, 10000, 50000};
//     int n, cnt=0;
//     cin >> n;
//     for (int i = 7; i >= 0; i--)
//     {
//         cnt += n/money[i];
//         n %= money[i];
//     }
//     cout<< cnt;
// }

// int main(){
//     int T;
//     int a,b;
//     cin.tie(NULL);
//     ios::sync_with_stdio(false);
//     cin >> T;
//     for(int i=0; i<T; i++){
//         cin >> a >> b;
//         cout << a+b << '\n';
//     }
// }

// //#3321 최고의 피자(최고의 열량을 찾는 문제)
// // 토핑의 가장 큰 값부터 더하면서 평균을 찾는 그리디 문제
// bool compare(int a, int b){
//     return a > b;
// }
// int main(){
//     int N, A, B, C, D[100], totalCal = 0, totalPri = 0;
//     cin >> N;
//     cin >> A >> B;
//     cin >> C;
//     totalCal += C;
//     totalPri += A;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> D[i];
//     }
//     sort(D, D + N, compare);
//     for (int i = 0; i < N; i++)
//     {
//         if (float(totalCal/totalPri) < (float(totalCal + D[i]) / (totalPri + B))){
//             totalCal += D[i];
//             totalPri += B;
//         }
//     }
//     cout << fixed << setprecision(0) << floor(totalCal/totalPri);
// }

// // //#4040 펜션
// int main(){
//     int n, m, s, t; // n = 펜션에서 관리하는 여름 성수기, m = 펜션이 보유하고 있는 방의 갯수
//     char a[101][31];
//     int maxNum = 0, currentNum = 0, currentRoom, changeNum = 0, currentDay;
//     cin >> n >> m;
//     for(int i =1; i<=n; i++){
//         for (int j =1; j<=m; j++){
//             cin >> a[i][j];
//         }
//     }
//     cin >> s >> t;
//     currentDay = s;
//     while(currentDay != t){
//         for(int i=1; i<=m; i++){
//             if(a[currentDay][i] == 'O'){
//                 for (int j = 0; j < t - currentDay; j++){
//                     if (a[currentDay + j][i] == 'X')
//                         break;
//                     else{
//                         currentNum++;
//                         currentRoom = i;
//                     }
//                 }
//             }
//             if(maxNum < currentNum){
//                 maxNum = currentNum;
//             }
//             currentNum = 0;
//         }
//         if(maxNum == 0){
//             changeNum = 0;
//             break;
//         }
//         currentDay += maxNum;
//         maxNum = 0;
//         currentNum = 0;
//         changeNum++;
//     }
//     cout << changeNum - 1;
//     return 0;
// }

//#4713 공주님의 정원
int main(){
    int N, a, b, c, d, maxEnd = 0, maxIndex = 0, change = 0;
    cin >> N;
    int start = 300;
    int end = 301;
    vector<pair<int, int> > flower(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b >> c >> d;
        if(a*100 + b > 301){
            a = 3;
            b = 1;
        }
        if(c*100 + d >1130){
            c = 12;
            d = 1;
        }

        int s = a * 100 + b;
        int t = c * 100 + d;
        flower.push_back({s, t});
    }
    
    sort(flower.begin(), flower.end());

    for(int i =0; i<N; i++){
        if(flower[i].first > start && flower[i].first <= end){
            if(maxEnd < flower[i].second){
                maxEnd = flower[i].second;
                maxIndex = i;
                start = flower[i].first;
            }
            if(flower[i].second == 1201){
                change++;
                break;
            }
            if(i == N-1 && flower[i].second < 1201){
                change = 0;
                break;
            }
        }
        else{
            i--;
            change++;
            end = maxEnd;
        }
    }

    cout << change;
}
