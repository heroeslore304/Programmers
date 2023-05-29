#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    string answer = "";
    vector<string>s_part = participant;
    vector<string>s_com = completion;

    sort(s_part.begin(), s_part.end());
    sort(s_com.begin(), s_com.end());
    while (!s_part.empty())
    {
        string p = s_part.back();
        s_part.pop_back();
        if(!s_com.empty())
        {
            if (p == s_com.back())
            {
                s_com.pop_back();
            }
            else
                answer = p;
        }
        else
            answer = p;
    }
    return answer;
}