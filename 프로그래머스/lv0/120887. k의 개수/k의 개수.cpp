#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char c = k+'0';
    for(int n = i;n<=j;n++)
    {
        string str = to_string(n);
        int co = count(str.begin(),str.end(),c);
        answer +=co;
    }
    return answer;
}