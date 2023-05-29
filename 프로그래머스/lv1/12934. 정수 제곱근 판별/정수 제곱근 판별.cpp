#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long k = sqrt(n);
    if(k*k == n)
        answer =  (k+1)*(k+1);
    else
        answer = -1;
    return answer;
}