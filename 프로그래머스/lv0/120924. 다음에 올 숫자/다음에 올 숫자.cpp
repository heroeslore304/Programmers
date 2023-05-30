#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int gap = 0;
    int a = common[1]-common[0];
    int b = common[2]-common[1];
    int c=0;
    int d=0;
    if(common[0]!=0&&common[1]!=0)
    {
        c = common[1]/common[0];
        d = common[2]/common[1];
    }
    if(a==b)
    {
        gap = a;
        answer = common[common.size()-1]+gap;
    }
    else if(c==d)
    {
        gap = c;
        answer = common[common.size()-1]*gap;
    }
    
    return answer;
}