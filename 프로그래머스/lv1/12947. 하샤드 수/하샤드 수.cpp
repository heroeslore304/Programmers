#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int ha = 0;
    int n = x;
    
    while(n>0)
    {
        int k = n%10;
        n=n/10;
        ha +=k;
    }
    if(x%ha==0)
        answer = true;
    else
        answer = false;
    return answer;
}