#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string before, string after) {
    int answer = 1;
    int size = before.size();
    vector<bool> memo (size,false);
    
    for(int i = 0 ;i<size;i++)
    {
        for(int j = 0;j<size;j++)
        {
            if(!memo[j])
            {
                if(before[i]==after[j])
                {
                    memo[j]=true;
                    break;
                }
            }
        }
    }
    for(int i = 0;i<size;i++)
    {
        if(!memo[i])
            answer = 0;
        cout<<memo[i]<<",";
    }
    return answer;
}