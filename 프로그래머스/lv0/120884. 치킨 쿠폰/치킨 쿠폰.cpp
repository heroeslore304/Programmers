#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int t = chicken;
    while(t>9)
    {
        int temp = t/10;
        answer +=temp;
        t = temp +t%10;
    }
    return answer;
}