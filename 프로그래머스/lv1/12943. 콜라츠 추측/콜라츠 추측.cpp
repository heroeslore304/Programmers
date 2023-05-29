#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long k = num;
    int count =0;
    while(count<500)
    {
        if(k==1)
        {break;}
        if(k%2==0)
        {k = k/2;}
        else
        {k= k*3+1;}
        count++;
    }
    if(k==1)
        answer = count;
    else
        answer = -1;
    return answer;
}