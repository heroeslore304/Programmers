#include <string>
#include <vector>
#include <deque>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    deque<int> dq;
    for(int i = 0;i<operations.size();i++)
    {
        if(operations[i][0]=='I')
        {
            string str = operations[i].substr(2,operations[i].size()-1);
            int temp = stoi(str);
            deque<int> tempq;
            if(dq.empty())
                dq.push_back(temp);
            else
            {
                bool tempinsert = false;
                while(!dq.empty())
                {
                    int m = dq.front();
                    dq.pop_front();
                    if(temp<m)
                    {
                        tempq.push_back(temp);
                        tempinsert = true;
                    }
                    tempq.push_back(m);
                }
                if(!tempinsert)
                    tempq.push_back(temp);
                dq = tempq;
            }
        }
        else if(!dq.empty())
        {
            if(operations[i][2]=='1')
                dq.pop_back();
            else
                dq.pop_front();
        }
    }
    if(dq.empty())
        answer = {0,0};
    else
    {
        int max = dq.back();
        int min = dq.front();
        answer = {max,min};
    }
    return answer;
}