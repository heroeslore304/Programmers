#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int>v = score;
    sort(v.rbegin(),v.rend());
    int count = v.size()/m;
    int sum = 0;
    for(int i = 0;i<count;i++)
    {
        int p = v[(i*m)+m-1]*m;
        sum += p;
    }
    answer = sum;
    return answer;
}