#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long long k = n;
    while(k != 0)
    {
        int a = k%10;
        answer.push_back(a);
        k= k/10;
    }
    return answer;
}