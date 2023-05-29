#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    vector<int> l = sides;
    sort(l.begin(),l.end());
    if(l[2]<l[1]+l[0])
        answer = 1;
    else
        answer = 2;
    return answer;
}