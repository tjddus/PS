#include <iostream>
using namespace std;

int t, n;
long long a[101] = {1,1,1,2,2,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    
    while(t--){
        cin >> n;
        for(int i = 5; i<n; i++){
            a[i] = a[i-1] + a[i-5];
        }
        cout << a[n-1] << "\n";
    }

}