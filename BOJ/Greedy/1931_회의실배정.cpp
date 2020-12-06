#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, mins = 0, cnt = 0;
    pair<int, int> schedule[100000];

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &schedule[i].second, &schedule[i].first);
    }
    sort(schedule, schedule + N);

    for (int i = 0; i < N; i++)
    {
        if (mins <= schedule[i].second)
        {
            mins = schedule[i].first;
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}