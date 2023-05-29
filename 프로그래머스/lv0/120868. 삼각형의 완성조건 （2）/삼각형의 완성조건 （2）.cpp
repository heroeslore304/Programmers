#include <string>
#include <vector>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int l = sides[0]>sides[1] ? sides[0]:sides[1];
    int s = sides[0]<sides[1] ? sides[0]:sides[1];
    int sum = sides[0]+sides[1];
    for(int i =1;i<sum;i++)
    {
        if(i<l)
        {
            if(s+i>l)
                answer++;
        }
        else
            answer++;
    }
    return answer;
}