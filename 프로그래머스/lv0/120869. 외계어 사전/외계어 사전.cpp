#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for(int i = 0;i<dic.size();i++)
    {
        if(dic[i].size()==spell.size())
        {
            for(int j = 0;j<spell.size();j++)
            {
                if(dic[i].find(spell[j])==string::npos)
                {
                    break;
                }
                else if (j== spell.size()-1)
                {
                    answer = 1;
                }
            }
        }
    }
    return answer;
}