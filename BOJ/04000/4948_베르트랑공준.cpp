#include <iostream>
#include <queue>
using namespace std;

int arr[246913];
queue<int> q;

int main(){
    int n = 1, max = 0;
    while(1){
        cin >> n;
        if(n == 0)
            break;
        if(max < n)
            max = n;
        q.push(n);
    }

    arr[1] = 1;
    for(int i = 2; i <= 2* max; i++){
        for (int j = i + i; j <= 2 * max; j += i)
        {
            if(arr[j] == 0) arr[j] = 1;
        }
    }

    while (!q.empty())
    {
        int v = q.front(), cnt = 0;
        for (int i = v + 1; i <= 2 * v; i++)
        {
            if (arr[i] == 0)
                cnt++;
        }
        cout << cnt << "\n";
        q.pop();
    }
    return 0;
}