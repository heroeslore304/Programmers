#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0;i<my_string.size();i++)
    {
        if(isdigit(my_string[i]))
        {
            int k = my_string[i]-'0';
            answer.push_back(k);
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}