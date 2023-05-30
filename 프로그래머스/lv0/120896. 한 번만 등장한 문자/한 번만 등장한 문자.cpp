#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> alpha (26, 0);
    for(int i = 0;i<s.size();i++)
    {
        int a = s[i]-'a';
        alpha[a]++;
    }
    for(int i = 0;i<alpha.size();i++)
    {
        if(alpha[i]==1)
        {
            char c = 'a'+i;
            answer.push_back(c);
        }
    }
    return answer;
}