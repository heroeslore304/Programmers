#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    bool count = true;
    for(int i = 2; i <= n; i++)
    {
        count = true;
        for(int j = 2; j*j<=i;j++)
        {
            if(i%j == 0)
            {
                count = false;
                break;
            }
        }
        if(count)
        {
            answer++;
        }
    }
    return answer;
}