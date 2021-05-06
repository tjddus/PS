#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers, string hand)
{
    string answer = "";
    int left = 10, right = 11;
    vector<pair<int, int> > keypad;
    keypad.push_back(make_pair(3, 1));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            keypad.push_back(make_pair(i, j));
        }
    }
    keypad.push_back(make_pair(3, 0));
    keypad.push_back(make_pair(3, 2));

    for (int i = 0; i < numbers.size(); i++){
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            left = numbers[i];
            answer += "L";
        }else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9 ){
            right = numbers[i];
            answer += "R";
        }else{
            int lDiffer = abs(keypad[numbers[i]].first - keypad[left].first) + abs(keypad[numbers[i]].second - keypad[left].second);
            int rDiffer = abs(keypad[numbers[i]].first - keypad[right].first) + abs(keypad[numbers[i]].second - keypad[right].second);

            if(lDiffer == rDiffer){
                if(hand == "left") {answer += "L"; left = numbers[i];}
                else {answer += "R"; right = numbers[i];}
            } 
            else if(lDiffer < rDiffer){
                answer += "L";
                left = numbers[i];
            }else{
                answer += "R";
                right = numbers[i];
            }
        }

    }

    return answer;
}
