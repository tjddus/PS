#include <bits/stdc++.h>

using namespace std;

int solution(string str1, string str2)
{
    int answer;
    int a = 0, b = 0, C[676] = {0}, D[676] = {0};
    for (int i = 0; i < str1.size(); i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < str2.size(); i++)
    {
        str2[i] = tolower(str2[i]);
    }

    for (int i = 0; i < str1.size()-1; i++)
    {
        if (isalpha(str1[i]) && isalpha(str1[i + 1]))
            C[(str1[i] - 'a') * 26 + (str1[i+1] - 'a')]++;
    }

    for (int i = 0; i < str2.size()-1; i++)
    {
        if (isalpha(str2[i]) && isalpha(str2[i + 1]))
            D[(str2[i] - 'a') * 26 + (str2[i+1] - 'a')]++;
    }

    for (int i = 0; i < 676; i++)
    {
        a += min(C[i], D[i]);
        b += max(C[i], D[i]);
    }

    if (b == 0) answer = 65536;
    else answer = a * 65536 / b;

    return answer;
}
