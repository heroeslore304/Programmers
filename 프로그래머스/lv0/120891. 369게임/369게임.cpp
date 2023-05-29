#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    int n = order;
    while(n>0)
    {
        int temp = n%10;
        if(temp==3||temp==6||temp==9)
            answer++;
        n = n/10;
    }
    return answer;
}