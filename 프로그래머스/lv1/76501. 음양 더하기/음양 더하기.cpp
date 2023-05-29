#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    for (int i = 0; i < absolutes.size(); i++)
    {
        int temp = absolutes[i];
        if (!signs[i])
        {
            temp = temp * -1;
        }
        answer = answer + temp;
    }
    return answer;
}