#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int k = 0;
    for(int i = 0;i<s.size();i++)
    {
        char c;
        if(s[i]==' ')
        {
            k=0;
            answer.push_back(' ');
            continue;
        }
        if(k%2==0)
        {
            c = toupper(s[i]);
        }
        else
        {
            c = tolower(s[i]);
        }
        answer.push_back(c);
        k++;
    }
    return answer;
}