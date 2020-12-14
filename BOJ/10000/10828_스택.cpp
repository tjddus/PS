#include <iostream>
using namespace std;

int queue[10000];
int qSize = 0;

int push(int x);
int pop();
int size();
int empty();
int top();

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        if (s.compare("push") == 0)
        {
            int x;
            cin >> x;
            push(x);
        }
        else if (s.compare("pop") == 0)
        {
            cout << pop() << "\n";
        }
        else if (s.compare("size") == 0)
        {
            cout << size() << "\n";
        }
        else if (s.compare("empty") == 0)
        {
            cout << empty() << "\n";
        }
        else if (s.compare("top") == 0)
        {
            cout << top() << "\n";
        }
    }
    return 0;
}

int push(int x)
{
    queue[qSize] = x;
    qSize++;
    return qSize;
}
int pop()
{
    if (qSize == 0)
        return -1;
    else
    {
        int popX = queue[qSize - 1];
        qSize--;
        return popX;
    }
}
int size()
{
    return qSize;
}
int empty()
{
    if (qSize == 0)
        return 1;
    else
        return 0;
}
int top()
{
    if(qSize == 0)
        return -1;
    else
        return queue[qSize - 1];
}