#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int m = a>b ? a%b:b%a;
    int x = a<b ? a:b;
    int y = a<b ? a:b;
    
    while(m>0)
    {
        x = y;
        y = m;
        m = x%y;
    }
    int n = y;
    x = b/n;
    while(x>1)
    {
        if(x%5==0)
            x=x/5;
        else if (x%2==0)
            x=x/2;
        else 
            break;
    }
    if(x==1)
        answer = 1;
    else
        answer = 2;
    return answer;
}