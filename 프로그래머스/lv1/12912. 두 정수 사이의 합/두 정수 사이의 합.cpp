#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a-b<0)
    {
        for(long long i = a; i<=b; i++)
        {
            answer = answer+i;
        }
    }
    else if(a-b>0)
    {
            for(long long i = b; i<=a; i++)
        {
            answer = answer+i;
        }
    }
    else if(a==b)
    {
        answer =a;
    }
    return answer;
}