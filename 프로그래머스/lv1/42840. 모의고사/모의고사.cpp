#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<int> fst = { 1,2,3,4,5 };
    vector<int> snd = { 1,3,4,5 };
    vector<int> trd = { 3,3,1,1,2,2,4,4,5,5 };

    int f = 0;
    int s = 0; 
    int t = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        if (fst[i%5] == answers[i])
        {
            f++;
        }
        if (i % 2 == 0)
        {
            if (answers[i] == 2)
            {
                s++;
            }
        }
        else if (snd[((i-1)/2)%4] == answers[i])
        {
            s++;
        }
        if (trd[i % 10] == answers[i])
        {
            t++;
        }

    }
    int temp = f;
    if (s >=temp)
        temp = s;
    if (t >=temp)
        temp = t;
    if (f == temp)
        answer.push_back(1);
    if (s == temp)
        answer.push_back(2);
    if (t == temp)
        answer.push_back(3);
    return answer;
}