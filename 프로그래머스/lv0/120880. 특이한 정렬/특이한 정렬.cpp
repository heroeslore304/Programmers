#include <string>
#include <vector>
using namespace std;
vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    for(int i = 0;i<numlist.size();i++)
    {
        if(answer.size()==0)
            answer.push_back(numlist[i]);
        else
        {
            int temp = numlist[i];
            for(int j = 0 ;j<answer.size();j++)
            {
                int len = n-temp;
                if(len<0)
                    len = len*-1;
                int templen = n-answer[j];
                if(templen<0)
                    templen = templen*-1;
                if(len<templen)
                {
                    int t = temp;
                    temp = answer[j];
                    answer[j]=t;
                }
                else if (len == templen)
                {
                    if(temp>answer[j])
                    {
                        int t = temp;
                        temp = answer[j];
                        answer[j]=t;
                    }
                }
            }
            answer.push_back(temp);
        }
    }
    return answer;
}