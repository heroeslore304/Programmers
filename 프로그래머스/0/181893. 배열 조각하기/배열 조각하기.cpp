#include <string>
#include <vector>
#include <deque>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    deque<int> dq;
    for(int i =0;i<arr.size();i++)
    {
        dq.push_back(arr[i]);
    }
    for(int i = 0 ;i<query.size();i++)
    {
        if(i%2==0)
        {
            while(dq.size()>query[i]+1)
                dq.pop_back();
        }
        else
        {
            for(int j = 0;j<query[i];j++)
                dq.pop_front();
        }
    }
    while(!dq.empty())
    {
        int temp = dq.front();
        dq.pop_front();
        answer.push_back(temp);
    }
    return answer;
}