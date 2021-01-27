#include <iostream>
using namespace std;

string sbPre, sbIn, sbPost;
int a[2][26];

void preTraval(int cur)
{
    sbPre += (cur + 'A');
    if (a[0][cur] != -1)
        preTraval(a[0][cur]);
    if (a[1][cur] != -1)
        preTraval(a[1][cur]);
}

void InTraval(int cur)
{
    if (a[0][cur] != -1)
        InTraval(a[0][cur]);
    sbIn += (cur + 'A');
    if (a[1][cur] != -1)
        InTraval(a[1][cur]);
}

void PostTraval(int cur)
{
    if (a[0][cur] != -1)
        PostTraval(a[0][cur]);
    if (a[1][cur] != -1)
        PostTraval(a[1][cur]);
    sbPost += (cur + 'A');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char st, cur, left, right;
    int root, n, Broot;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> cur >> left >> right;
        root = cur - 'A';
        if (i == 0)
            Broot = root;
        if (left == '.')
            a[0][root] = -1;
        else
            a[0][root] = left - 'A';

        if (right == '.')
            a[1][root] = -1;
        else
            a[1][root] = right - 'A';
    }

    preTraval(Broot);
    InTraval(Broot);
    PostTraval(Broot);

    cout << sbPre << "\n"
         << sbIn << "\n"
         << sbPost << "\n";

    return 0;
}