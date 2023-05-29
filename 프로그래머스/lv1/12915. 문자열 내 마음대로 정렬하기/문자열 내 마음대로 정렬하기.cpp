#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    for(int i= 0;i < strings.size();i++)
    {
        strings[i] = strings[i][n] + strings[i];
    }
    sort(strings.begin(),strings.end());
    for(int i =0;i<strings.size();i++)
    {
        string sub = strings[i].substr(1);
        answer.push_back(sub);
    }
    return answer;
}