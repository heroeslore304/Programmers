#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    string str = today.substr(2,4);
    int y = stoi(str);
    str = today.substr(5,7);
    int m =stoi(str);
    str = today.substr(8,10);
    int d = stoi(str);
    int now = y*12*28+m*28+d;
    
    for(int i = 0;i<privacies.size();i++)
    {
        str = privacies[i].substr(2,4);
        int dy = stoi(str);
        str = privacies[i].substr(5,7);
        int dm = stoi(str);
        str = privacies[i].substr(8,10);
        int dd = stoi(str);
        str = privacies[i].substr(11,12);
        int past = dy*12*28+dm*28+dd;
        for(int j = 0;j<terms.size();j++)
        {
            if(str[0]==terms[j][0])
            {
                str = terms[j].substr(2);
                int term = stoi(str);
                term = term*28;
                if(now-past>=term)
                {
                    answer.push_back(i+1);
                }
            }
        }
    }
    
    return answer;
}