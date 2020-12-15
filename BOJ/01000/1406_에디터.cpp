#include <iostream>
#include <string>
#include <stack>
using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int T, currentCursor = s.size();
//     cin >> T;
//     while (T--)
//     {
//         string command;
//         cin >> command;
//         if(command.compare("L")==0){
//             if(currentCursor != 0){
//                 currentCursor--;
//             }
//         }else if(command.compare("D") == 0){
//             if(currentCursor != s.size()){
//                 currentCursor++;
//             }
//         }else if(command.compare("B") == 0){
//             if(currentCursor != 0){
//                 s.erase(currentCursor - 1, 1);
//                 currentCursor--;
//             }
//         }else if(command.compare("P") == 0){
//             char x;
//             cin >> x;
//             s.insert(currentCursor, 1, x);
//             currentCursor++;
//         }
//     }
//     cout << s << "\n";
//     return 0;
// }


int main(){
    string s;
    int T; 
    stack<char> head;
    stack<char> tail;
    cin >> s;
    cin >> T;
    for(char ch:s){
        head.push(ch);
    }
    cin.ignore();
    while(T--){
        string str;
        cin >> str;
        if(str.compare("L") == 0){
            if(!head.empty()){
                tail.push(head.top());
                head.pop();
            }
        }else if(str.compare("D") == 0){
            if(!tail.empty()){
                head.push(tail.top());
                tail.pop();
            }
        }else if(str.compare("B") == 0){
            if (!head.empty())
                head.pop();
        }else if(str.compare("P") == 0){
            char x;
            cin >> x;
            head.push(x);
        }
    }

    while(!head.empty()){
        tail.push(head.top());
        head.pop();
    }
    while(!tail.empty()){
        cout << tail.top();
        tail.pop();
    }
    return 0;
}
// string으로 삽입, 삭제를 할 경우 시간복잡도 O(N)이 걸림. 이 문제의 경우 string의 라이브러리로 풀 수 없다
// O(1)로 삽입 삭제를 해결해야함. <시간초과>