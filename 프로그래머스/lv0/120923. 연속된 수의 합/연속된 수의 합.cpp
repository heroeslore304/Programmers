#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int n = total/num;
    int s = n-num/2;
    int e = n+num/2;
    if(e-s>=num)
        s= s+1;
    
    for(int i = s;i<=e;i++)
    {
        answer.push_back(i);
    }
    return answer;
}