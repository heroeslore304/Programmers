#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = n;
    vector<int> tri;
    while (num != 0)
    {
        int k = num%3;
        tri.push_back(k);
        num = num/3;
    }
    for(int i =0;i<tri.size();i++)
    {
        answer = answer*3+tri[i];
    }
    return answer;
}