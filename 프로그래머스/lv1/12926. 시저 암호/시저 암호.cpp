#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.size();i++)
    {
        if(s[i]!=' ')
        {
            if(s[i]+n>'z')
            {
                int k = s[i]+n -'z';
                s[i] = 'a'+(k-1);
            }
            else if(s[i] <='Z' && s[i]+n >'Z')
            {
                int k = s[i]+n -'Z';
                s[i] = 'A'+(k-1);
            }
            else
            {
                s[i] = s[i]+n;
            }
        }
        
    }
    answer = s;
    return answer;
}