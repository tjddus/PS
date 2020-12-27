#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<pair<int, string>> subscriber;
int N, age;
string name;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> age >> name;
        subscriber.push_back(make_pair(age, name));
    }

    stable_sort(subscriber.begin(), subscriber.end(), compare);

    for (int i = 0; i < N; i++)
    {
        cout << subscriber[i].first << " " << subscriber[i].second << "\n";
    }
    return 0;
}