#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    int temp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        temp = a[i] * b[i];
        answer = answer + temp;
    }
    return answer;
}