#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    int T, X;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        if(str.compare("push_front") == 0){
            cin >> X;
            d.push_front(X);
        }else if(str.compare("push_back") == 0){
            cin >> X;
            d.push_back(X);
        }else if(str.compare("pop_front") == 0){
            if(d.empty())
                cout << -1 << "\n";
            else{
                cout << d.front() << "\n";
                d.pop_front();
            }
        }else if(str.compare("pop_back") == 0){
            if(d.empty())
                cout << -1 << "\n";
            else{
                cout << d.back() << "\n";
                d.pop_back();
            }
        }else if(str.compare("size") == 0){
            cout << (d.empty()? 0:d.size()) << "\n";
        }else if(str.compare("empty") == 0){
            cout << d.empty() << "\n";
        }else if(str.compare("front") == 0){
            cout << (d.empty()? -1:d.front()) << "\n";
        }else if(str.compare("back") == 0){
            cout << (d.empty()? -1:d.back()) << "\n";
        }
    }

}