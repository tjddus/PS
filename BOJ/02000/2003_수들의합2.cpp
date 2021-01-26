#include <iostream>

using namespace std;

int n, m, sum = 0, ans = 0, nos[10001];
int i, s = 0, e = -1; // 투포인트

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n>> m;
    for (int i = 0; i < n; i++)
        cin >> nos[i];

    while (e < n)
    {
        if (sum < m)
        {
            ++e;
            sum += nos[e];
        }
        else if (sum == m)
        {
            ++ans;
            sum -= nos[s];
            ++s;
        }
        else
        {
            sum -= nos[s];
            ++s;
        }
    }

    cout << ans;
    return 0;
}

// 이진 탐색  vs 투 포인터 알고리즘

/*1) 이진탐색 O(logN) - (1920번)수 찾기
    - 이진탐색이 경우 탐색 대상 데이터가 정렬되어 있다는 가정하게 탐색을 하게 되는 경우
    - mid = (low+high) /2 를 활용해서 연산마다 탐색 범위 좁힘
*/
/*2) 투 포인터 O(N) - (2003번)수들의 합 2
    - 집합처럼 고정된 배열의 경우, 정렬에 대한 제약이 없는 경우
    - 양끝단에서 한 칸씩 이동하면서 알맞는 값을 찾는 식으로 쓰임
    - 추가) 1차원 배열에서 연속되는 값들을 이용해서 (정렬 X) 문제를 해결해야 하는 경우 두 개의 포인터를 이용해 결과를 얻음
*/