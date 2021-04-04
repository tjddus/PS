#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> gift_cards, vector<int> wants)
{
    int n = gift_cards.size();
    int answer = n, cnt = 0;
    int i = 0, j = 0;

    sort(gift_cards.begin(), gift_cards.end());
    sort(wants.begin(), wants.end());

    while (i != n && j != n)
    {
        if (gift_cards[i] > wants[j])
        {
            ++j;
        }
        else if (gift_cards[i] < wants[j])
        {
            ++i;
        }
        else
        {
            ++i;
            ++j;
            ++cnt;
        }
    }

    answer -= cnt;
    return answer;
}