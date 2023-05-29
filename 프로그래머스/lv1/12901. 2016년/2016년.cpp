#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int>month ={0,31,60,91,121,152,182,213,244,274,305,335};
    vector<string>dow = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int day = month[a-1]+b;
    day = day%7;
    answer = dow[day];
    return answer;
}