#include <iostream>
using namespace std;

#define Max_N 1000001

int n, m, maxHeight = 0;
int trees[Max_N];

bool check(int curH)
{
    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += max(0, trees[i] - curH);

    return (m <= sum);
}

void BST(int maxHeight)
{
    int low = 0, high = maxHeight, mid;
    mid = (low + high) / 2;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if ((check(mid)))
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << high << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
        maxHeight = max(maxHeight, trees[i]);
    }

    BST(maxHeight);

    return 0;
}