#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 주석처리 : option + shift + a
// //#1
// int main(void){
//     cout << "Hello";
//     return 0;
// }

// //#2
// int main(void) {
//     cout << "Hello World";
//     return 0;
// }

// //#3
// int main(){
//     cout<<"Hello\nWorld";
//     return 0;
// }

// //#4,5
// int main(){
//     cout<<"\"Hello World\"";
//     return 0;
// }

// //#6
// int main(){
//     cout<<"\"!@#$%^&*()\"";
//     return 0;
// }

// // #7
// int main(){
//     cout<<"\"C:\\Download\\hello.cpp\"";
//     return 0;
// }

// //#8
// int main(){
//     cout<<"\u250C\u252C\u2510\n\u251C\u253C\u2524\n\u2514\u2534\u2518";
//     return 0;
// }

// //#9
// int main(){
//     int n;
//     cin >> n;
//     cout << n;
//     return 0;
// }

// //#10
// int main(){
//     char n;
//     cin >> n;
//     cout << n;
//     return 0;
// }

// //#11
// int main(){
//     float x;
//     cin >> x;
//     cout << fixed << setprecision(6) << x;
//     return 0;
// }

// //#12, 13, 14
// int main(){
//     float n;
//     cin >> n;
//     cout << fixed << setprecision(2) << n;
//     return 0;
// }

// int main(){
//     int a;
//     cin >> a;
//     cout << a << ' ' << a << ' ' << a;
//     return 0;
// }

// //#19
// int main(){
//     int y, m, d;
//     scanf("%d.%d.%d", &y, &m, &d);
//     printf("%.4d.%.2d.%.2d", y, m, d);
//     return 0;
// }

// //#20
// int main(){
//     int f, s;
//     scanf("%d-%d", &f, &s);
//     printf("%.6d%.7d", f, s);
//     return 0;
// }

// //#21
// int main(){
//     char s[2000];
//     cin.getline(s, 2000);
//     cout << s;
//     return 0;
// }

// //#22
// int main(){
//     int a, b;
//     scanf("%d.%d", &a, &b);
//     printf("%d\n%d", a, b);
//     return 0;
// }

// //#23
// int main(){
//     char d[21];
//     cin >> d;
//     for(int i=0;d[i]!=0;i++){
//         cout << "\'" << d[i] << "\'\n";
//     }
//     return 0;
// }

// //#24
// int main(){
//     int a, b, c, d, f;
//     scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &f);
//     printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", a*10000, b*1000, c*100, d*10, f);
// }

// //#25
// int main(){
//     int h, m, s;
//     scanf("%d:%d:%d", &h, &m, &s);
//     printf("%d", m);
// }

// //#26
// int main(){
//     int y, m, d;
//     scanf("%d.%d.%d", &y, &m, &d);
//     printf("%.2d-%.2d-%.4d", d, m, y);
// }

// //#27
// int main(){
//     unsigned int n;
//     cin >> n;
//     cout << n;
// }

// //#28
// int main(){
//     double d;
//     cin >> d;
//     cout << fixed << setprecision(11) << d;
// }

// //#29, 30
// int main(){
//     long long int n;
//     cin >> n;
//     cout <<n;
// }

// //#31-34
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%o", n);
//     printf("%x", n);
//     printf("%X", n);
// }

// //#35
// int main(){
//     int n;
//     scanf("%x", &n);
//     printf("%o", n);
// }

// //#36-37
// int main(){
//     int c;
//     scanf("%d", &c);
//     printf("%c", c);
// }

// //#38-39
// int main(){
//     long long int a, b;
//     cin >> a >> b;
//     cout << a+b;
// }

// //#40
// int main(){
//     long long a;
//     cin >> a;
//     cout << -a;
// }

// //#42-43
// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << (a%b);
// }

// //#43
// int main(){
//     long long a;
//     cin >> a;
//     cout << ++a;
// }

// //#44
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << a + b << "\n"
//          << a - b << "\n"
//          << a * b << "\n"
//          << a / b << "\n"
//          << a % b << "\n";
//     float af = a;
//     cout << fixed << setprecision(2) << af / b;
// }

// //#45
// int main(){
//     float a, b, c;
//     cin >> a >> b >> c;
//     cout << a+b+c <<"\n"<<fixed<<setprecision(1)<< (a+b+c)/3;
// }

// //#46
// int main(){
//     int a;
//     cin >> a;
//     cout << (a<<1);
// }

// //#48
// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << (a<<b);
// }

// //#49-51
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << (a!=b);
// }

// //#52-53
// int main(){
//     int a;
//     cin >> a;
//     cout << (!a);
// }

// //#54-56
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << (a==b);
// }

// //#58 (not A and not B = not(A||B))
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << !(a||b);
// }

// //#59
// int main()
// {
//     int a;
//     cin >> a;
//     cout << ~a;
// }

// //#60
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << (a | b);
// }

// //#62
// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << (a^b);
// }

// //#63
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << (a<b? (a<c? a: c):(b<c? b:c));
// }

// //#64
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a % 2 == 0)
//     {
//         cout << a << '\n';
//     }
//     if (b % 2 == 0)
//     {
//         cout << b << '\n';
//     }
//     if (c % 2 == 0)
//     {
//         cout << c << '\n';
//     }
// }

// //#66-70
// int main()
// {
//     int month, m;
//     cin >> month;
//     switch (month)
//     {
//     case 12:
//     case 1:
//     case 2:
//         cout << "winter";
//         break;
//     case 5:
//     case 4:
//     case 3:
//         cout << "spring\n";
//         break;
//     case 6:
//     case 7:
//     case 8:
//         cout << "summer\n";
//         break;
//     case 9:
//     case 10:
//     case 11:
//         cout << "fall\n";
//         break;
//     }
// }

// //#71
// int main()
// {
//     int num, n;
//     cin >> num;
// reload:
//     if (num-- != 0)
//     {
//         cin >> n;
//         cout << n << "\n";
//         goto reload;
//     }
//     return 0;
// }

// //#72
// int main()
// {
//     int n;
//     cin >> n;
//     for(; n>=1; n--){
//         cout << n << "\n";
//     }
//     return 0;
// }

// //#73
// int main()
// {
//     int n;
//     cin >> n;
//     while (n-- != 0)
//     {
//         cout << n << "\n";
//     }
//     return 0;
// }

// //#74
// int main()
// {
//     char alp, start = 'a';
//     cin >> alp;
//     do
//     {
//         cout << start << " ";
//         start += 1;
//     } while (start <= alp);
//     return 0;
// }

// //#75
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//         cout << i << "\n";
//     }
// }

// //#76
// int main(){
//     int n, sum = 0;
//     cin >> n;
//     for(int i=0; i<=n; i++){
//         if(i%2 == 0){
//             sum += i;
//         }
//     }
//     cout << sum;
//     return 0;
// }

// //#77
// int main()
// {
//     char c;
//     do
//     {
//         cin >> c;
//         cout << c << "\n";
//     } while (c != 'q');
// }

// //#78
// int main()
// {
//     int n, sum = 0;
//     int i = 0;
//     cin >> n;
//     for (; sum < n; i++)
//     {
//         sum += i;
//         if (sum >= n)
//             break;
//     }
//     cout << i;
//     return 0;
// }

// //#81
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cout << i << " " << j << "\n";
//         }
//     }
// }

// //#82
// int main(){
//     int c;
//     scanf("%X", &c);
//     for (int i = 1; i <= 15; i++)
//     {
//         printf("%X*%X=%X\n", c, i, c * i);
//     }
//     return 0;
// }

// //#83
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if(i%3 == 0){
//             cout << "X" << " ";
//         }
//         else{
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// //#84
// int main()
// {
//     int r, g, b;
//     cin >> r >> g >> b;

//#85
int main(){
    long long h, b, c, s, ans;
    cin >> h >> b >> c >>  s;
    ans = h*b*c*s;
    cout << fixed << setprecision(1) << (ans / pow(2, 23));
    cout << " MB";
}

// //#87
// int main()
// {
//     int n, count = 0;
//     cin >> n;
//     for (int i = 1; ; i++)
//     {
//         count += i;
//         if (count >= n)
//         {
//             break;
//         }
//     }
//     cout << count;
//     return 0;
// }

// //#88
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             continue;
//         }
//         cout << i << " ";
//     }
//     return 0;
// }

// //#89
// int main(){
//     int a, d, n = 0;
//     cin >> a >> d >> n;
//     cout << a + d * (n - 1);
//     return 0;
// }

// //#90
// int main(){
//     long long a, r, n, mul;
//     cin >> a >> r >> n;
//     mul = a * pow(r, (n - 1));
//     cout << mul;
//     return 0;
// }

// //#91
// int main(){
//     int a, m, d, n;
//     cin >> a >> m >> d >> n;
//     long count = a;
//     for (int i = 1; i < n; i++)
//     {
//         count = (count * m) + d;
//     }
//     cout << count;
//     return 0;
// }

// //#92
// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     for (int i = 1;; i++)
//     {
//         if (i % a == 0 && i % b == 0 && i % c == 0)
//         {
//             cout << i;
//             break;
//         }
//     }
//     return 0;
// }

// //#93
// int main(){
//     int a[24] = {};
//     int n, m = 0;
//     cin >> n;
//     for(int i =0; i<n; i++){
//         cin >> m;
//         a[m] = a[m] + 1;
//     }
//     for (int i = 1; i <= 23; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

// //#94
// int main()
// {
//     int a[10000] = {};
//     int n, m = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> m;
//         a[i] = m;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

// //#95
// int main(){
//     int small, n, m;
//     cin >> n;
//     cin >> m;
//     small = m;
//     for (int i = 1; i < n; i++)
//     {
//         cin >> m;
//         if(small > m){
//             small = m;
//         }
//     }
//     cout << small;
//     return 0;
// }

// //#96
// int main()
// {
//     int n, x, y;
//     int a[20][20] = {};
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x >> y;
//         a[x][y] = 1;
//     }
//     for (int i = 1; i <= 19; i++)
//     {
//         for (int j = 1; j < 20; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// //#97
// int main()
// {
//     int n, x, y;
//     int a[20][20] = {};
//     for (int i = 1; i <= 19; i++)
//     {
//         for (int j = 1; j <= 19; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

// //#98
// int main()
// {
//     int h, w, n, l, d, x, y;
//     int a[101][101] = {};
//     cin >> h >> w;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> l >> d >> x >> y;
//         if (d == 0)
//         {
//             for (int j = 0; j < l; j++)
//             {
//                 a[x][y + j] = 1;
//             }
//         }
//         else
//         {
//             for (int k = 0; k < l; k++)
//             {
//                 a[x + k][y] = 1;
//             }
//         }
//     }
//     for (int i = 1; i <= h; i++)
//     {
//         for (int j = 1; j <= w; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
//     cin >> n;
//     for(int i = 1; i<= n; i++){
//         cin >> x >> y;
//         for(int k = 1; k<=19; k++){
//             if(a[x][k] == 0) a[x][k] = 1;
//             else a[x][k] = 0;
//         }
//         for(int k =1; k<=19; k++){
//             if(a[k][y] == 0) a[k][y] = 1;
//             else a[k][y] = 0;
//         }
//     }
//     for(int i =1; i<=19; i++){
//         for(int j = 1; j<=19; j++){
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < g; j++)
//         {
//             for (int k = 0; k <b; k++)
//             {
//                 cout << i << " " << j << " " << k << "\n";
//             }
//         }
//     }
//     cout << r * g * b;
//     return 0;
// }

// //#99
// int main()
// {
//     int a[11][11], x = 2, y = 2;
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     while ((a[x][y] != 2) || ((x == 10) && (y == 10)))
//     {
//         if (a[x][y] == 0)
//         {
//             a[x][y] = 9;
//         }
//         if (a[x][y + 1] != 1) y++;
//         else if (a[x + 1][y] != 1) x++;
//         else break;
//     }
//     a[x][y] = 9;
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// //#4011
// int main()
// {
//     int y, m, d, b;
//     char mf = 'M';
//     scanf("%2d%2d%2d-%1d", &y, &m, &d, &b);
//     if ((b % 2) == 0)
//     {
//         mf = 'F';
//     }
//     if (b < 3)
//     {
//         y = 1900 + y;
//     }
//     else
//     {
//         y = 2000 + y;
//     }
//     printf("%.4d/%.2d/%.2d %c", y, m, d, mf);
// }

// //#4041
// int main()
// {
//     char s[8];
//     int sum, k = 0;
//     cin >> s;
//     for(int i =0; s[i] != 0; i++){
//         k = i;
//         printf("%d", k);
//     }

//     for(int i = k; i == 0 ; i--){
//         if(s[i]!=0){
//             printf("%d", s[i]);
//             sum += s[i];
//         }
//     }

//     printf("%d", sum);
// }