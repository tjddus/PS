#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int N, pushLast = 0, currentFront = 0, res = 1;
    stack<int> s;
    queue<char> q;
    cin >> N;
    while(N--){
        int num;
        cin >> num;
        if(currentFront > num && pushLast > num){
            res = 0;
            break;
        }
        if(currentFront != num && currentFront < num){
            for(int i = pushLast+1; i<=num; i++){
                s.push(i);
                pushLast++;
                currentFront = num;
                q.push('+');
            }
        }
        if(currentFront == num && currentFront >= num){
            s.pop();
            if(!s.empty())
                currentFront = s.top();
            else
                currentFront = 0;            
            q.push('-');
        }
    }
    if(res == 0){
        cout << "NO" << "\n";
    }
    while(!q.empty() && res == 1){
        cout << q.front() << "\n";
        q.pop();
    }
    return 0;
}