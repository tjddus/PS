#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

#define MAX_N 11

int n, k, cards[MAX_N];
bool visited[MAX_N];
set<string> cardN;
vector<int> v;

void DFS(int cnt)
{
    if (cnt == k)
    {
        string s;
        for (int i = 0; i < v.size(); i++)
        {
            s += to_string(v[i]);
        }
        cardN.insert(s);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        visited[i] = true;
        v.push_back(cards[i]);
        DFS(cnt + 1);
        visited[i] = false;
        v.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    DFS(0);
    cout << cardN.size() << "\n";
    return 0;
}