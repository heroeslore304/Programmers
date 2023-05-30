#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int a = 1;
    int el = 0;
    char temp =s[0];
    for(int i =1;i<s.size();i++)
    {
        if(s[i]==temp)
            a++;
        else
        {
            el++;
            if(a==el)
            {
                answer++;
                a=0;
                el = 0;
                if(i+1<s.size())
                {
                    temp=s[i+1];
                    i++;
                    a=1;
                }
            }
        }  
    }
    if(a>0)
        answer++;
    return answer;
}