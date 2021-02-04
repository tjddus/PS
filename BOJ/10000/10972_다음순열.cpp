#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10005

int n, a[MAX_N], pos;
bool flag = true;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i > 1 && a[i-1] < a[i]) flag = false;
    }

    if(flag){
        cout << -1 << "\n";
        return 0;
    }

    next_permutation(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/* 다음 순열

1. 1 2 / 4 3 > 내림차순이 끝나는 부분의 pos 값을 구함.
2. (1) 2 < 3  (2) 2 < 4 인덱스 끝에서부터 비교
3. 1 3 / 4 2 > pos + 1 부터 끝까지 오름차순 정렬


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = n; i > 0; i--)
    {
        if (a[i - 1] < a[i])
        {
            pos = i - 1;
            break;
        }
    }

    if (pos == 0)
    {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = n; i > 0; i--)
    {
        if (a[pos] < a[i])
        {
            int temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
            break;
        }
    }

    sort(a + pos + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
*/