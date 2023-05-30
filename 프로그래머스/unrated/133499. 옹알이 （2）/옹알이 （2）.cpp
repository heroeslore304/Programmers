#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> bab = {"aya","ye","woo","ma"};
    vector<string> v = babbling;
    for(int i = 0;i<v.size();i++)
    {
        int tempi =-1;
        int tempj = -1;
        for(int j = 0;j<bab.size();j++)
        {
            if(v[i].find(bab[j])!=string::npos)
            {
                if (v[i].find(bab[j]) == tempi && j == tempj)
                    break;
                else
                {
                    string front = v[i].substr(0,v[i].find(bab[j]));
                    string back = v[i].substr(v[i].find(bab[j])+bab[j].size());
                    string str ="";
                    for(int k = 0;k<bab[j].size();k++)
                        str.push_back('1');
                    tempi = v[i].find(bab[j])+bab[j].size();
                    tempj = j;
                    v[i]= front+str+back;
                    j = -1;
                }
            }
        }
        for(int j = 0;j<v[i].size();j++)
        {
            if(v[i][j]!='1')
                break;
            else if(j==v[i].size()-1)
                answer++;
        }
    }
    return answer;
}