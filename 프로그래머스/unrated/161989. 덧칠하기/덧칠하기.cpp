#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int>sec = section;
    while(sec.size()>0)
    {
        int end = sec[sec.size()-1];
        for(int i=0;i<m;i++)
        {
            if(sec.size()<1)
                break;
            if(end-i==sec[sec.size()-1])
                sec.pop_back();  
        }
        answer++;
    }
    return answer;
}