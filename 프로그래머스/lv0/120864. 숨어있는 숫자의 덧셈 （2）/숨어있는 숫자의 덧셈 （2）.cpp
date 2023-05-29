#include <string>
#include <vector>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int temp = 0;
    bool digit = false;
    for(int i = 0;i<my_string.size();i++)
    {
        if(isdigit(my_string[i]))
        {
            int n = my_string[i] - '0';
            if(digit)
                temp = temp*10 + n;
            else
            {
                temp = n;
                digit = true;
            }
        }
        else
        {
            answer +=temp;
            temp = 0;
            digit = false;
        }
    }
    if(temp>0)
        answer +=temp;
    return answer;
}