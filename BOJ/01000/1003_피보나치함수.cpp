#include <iostream>
using namespace std;

pair<int, int> Fnum[40];

int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            if (i == 0)
            {
                Fnum[i].first = 1;
                Fnum[i].second = 0;
            }
            else if (i == 1)
            {
                Fnum[i].first = 0;
                Fnum[i].second = 1;
            }
            else{
                if(Fnum[i].first == 0 && Fnum[i].second == 0){
                    Fnum[i].first = Fnum[i-1].first + Fnum[i-2].first;
                    Fnum[i].second = Fnum[i-1].second + Fnum[i-2].second;
                }
            }
        }
        cout << Fnum[n].first << " " << Fnum[n].second << "\n";
    }
    return 0;
}