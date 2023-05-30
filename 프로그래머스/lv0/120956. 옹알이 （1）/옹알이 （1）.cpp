#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> olal = {"aya", "ye", "woo", "ma"};
    for(int i = 0;i<babbling.size();i++)
    {
        string str = babbling[i];
        int j = 0;
        string memo = " ";
        while(j<olal.size())
        {
            
            if(str.size()>0)
            {
                string temp = str.substr(0,olal[j].size());
                if(temp==olal[j]&&temp!=memo)
                {
                    int k = olal[j].size();
                    str = str.substr(k);
                    memo=temp;
                    j=0;
                    continue;
                }
            }
            j++;
        }
        if(str.size()<1)
            answer++;
    }
    return answer;
}