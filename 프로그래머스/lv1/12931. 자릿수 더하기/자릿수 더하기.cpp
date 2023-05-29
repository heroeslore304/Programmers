#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int k = n;
    while(k !=0)
    {
        int a = k%10;
        answer += a;
        k = k/10;
    }

    return answer;
}