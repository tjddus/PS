#include <iostream>
#include <algorithm>
using namespace std;

int a[9], total = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a + 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (total - a[i] - a[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k != i && k != j)
                        cout << a[k] << "\n";
                }
                return 0;
            }
        }
    }
    return 0;
}

// # 첫시도
/*
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 9; i++)
    {
        cin >> tall;
        v.push_back(tall);
        total += tall;
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        int temp = total;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (temp - v[i] - v[j] == 100)
            {
                v.erase(v.begin() + i);
                v.erase(v.begin() + (j - 1));
                break;
            }
        }
        temp = total;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    return 0;
}
*/


//# 두번째 시도
/*
 if문 내부에서 break를 걸어주니까 문제 발생 (제일 내부 for문만 stop하고 이후에는 계속 돌기 떄문에
 출력을 중복해서 하지 않는 문제의 경우 내부에 return해서 바로 종료시켜야 답이 됨)
*/