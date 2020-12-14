#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        int x;
        cin >> s;
        if (s.compare("push") == 0)
        {
            cin >> x;
            q.push(x);
        }
        else if (s.compare("pop") == 0)
        {
            if(q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (s.compare("size") == 0)
        {
            cout << q.size() << '\n';
        }
        else if (s.compare("empty") == 0)
        {
            cout << (q.empty()? 1:0) << '\n';
        }
        else if (s.compare("front") == 0)
        {
            cout << (q.empty()? -1:q.front()) << '\n';
        }
        else if(s.compare("back") == 0){
            cout << (q.empty()? -1:q.back()) << '\n';
        }
    }
    return 0;
}