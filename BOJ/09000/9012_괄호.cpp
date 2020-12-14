#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    cin.ignore();

    while(T--){
        stack<char> s;
        string str;
        int cnt = 0;
        getline(cin, str);

        for(char ch: str){
            s.push(ch);
        }

        while(!s.empty()){
            if(s.top() == ')')
                cnt++;
            else
                cnt--;
            s.pop();

            if(cnt < 0)
                break;
        }
        
        if(cnt < 0 || cnt != 0)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}