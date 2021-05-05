#include <string>
#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

string solution(string new_id)
{
    string answer = "";

    // solution 1
    for (char &c : new_id)
    {
        c = tolower(c);
    }

    // solution 2
    for (char &c : new_id)
    {
        if ((97 <= c && c <= 122) || ( 48 <= c && c <= 57) || strchr("-_.", c))
        {
            answer += c;
        }
    }

    // solution 3
    new_id = answer;
    answer.clear();
    for(char& c : new_id){
        if(!answer.empty() && answer.back() == '.' && c == '.') continue;
        answer += c;
    }


    //solution 4
    if (answer.front() == '.')
        answer.erase(0, 1);
    if(answer.back() == '.')
        answer.pop_back();

    //solution 5
    if (answer.size() == 0)
        answer += 'a';

    //solution 6
    if (answer.size() > 15)
        answer = answer.substr(0, 15);

    if (answer.front() == '.')
        answer.erase(0, 1);

    if(answer.back() == '.')
        answer.pop_back();


    // solution 7
    while (answer.size() < 3)
    {
        answer += answer.back();
    }

    return answer;
}

int main(){
    solution("s");
    return 0;
}