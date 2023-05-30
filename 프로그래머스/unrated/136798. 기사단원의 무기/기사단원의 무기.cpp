#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> weapons;
    for(int i = 1; i<=number;i++)
    {
        int temp = 0;
        int r = sqrt(i);
        for(int j = 1; j<=r;j++)
        {
            if(i%j==0)
            {
                temp++;
                if (i/j != j)
                    temp++;
            }
        }
        if(temp > limit)
            temp = power;
        answer +=temp;
    }
    return answer;
}