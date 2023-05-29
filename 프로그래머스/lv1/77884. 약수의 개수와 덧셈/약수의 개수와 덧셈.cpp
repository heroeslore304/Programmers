#include <string>
#include <vector>

using namespace std;
int meas(int num)
{
    int count = 0;
    for(int i  =1;i*i<=num;i++)
    {
        if(i*i == num)
        {
            count++;
        }
        else if(num%i == 0)
        {
            count=count+2;
        }
    }
    return count;
}
int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i<right+1;i++)
    {
        if(meas(i)%2 == 0 )
        {
            answer = answer+i;
        }
        else
        {
            answer= answer-i;
        }
    }
    return answer;
}