#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int coke = n;
    while(coke>=a)
    {
        int k = (coke/a)*b;
        int l = coke%a;
        coke = k+l;
        answer +=k;
    }
    return answer;
}