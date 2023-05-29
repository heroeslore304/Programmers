#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str;
    deque<char> dq;

    for (int i =0; i<s.size(); i++)
        dq.push_back(s[i]);

    while (!dq.empty())
    {
        char c = dq.front();
        if (isdigit(c)) {str.push_back(c); dq.pop_front();}
        else
        {
            if (c == 'z')
            { 
                str.push_back('0'); 
                dq.pop_front(); 
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
            }
            else if (c == 'o')
            {
                str.push_back('1');
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
            }
            else if (c == 'e')
            {
                str.push_back('8');
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
            }
            else if (c == 'n')
            {
                str.push_back('9');
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
                dq.pop_front();
            }
            else if (c == 't')
            {
                dq.pop_front();
                c = dq.front();
                if (c == 'w') { str.push_back('2'); dq.pop_front(); dq.pop_front();}
                else if (c == 'h') 
                { 
                    str.push_back('3');
                    dq.pop_front();
                    dq.pop_front();
                    dq.pop_front();
                    dq.pop_front();
                }
            }
            else if (c == 'f')
            {
                dq.pop_front();
                c = dq.front();
                if (c == 'o') { str.push_back('4'); dq.pop_front(); dq.pop_front(); dq.pop_front(); }
                else if (c == 'i') { str.push_back('5'); dq.pop_front(); dq.pop_front(); dq.pop_front(); }
            }
            else if (c == 's')
            {
                dq.pop_front();
                c = dq.front();
                if (c == 'i') { str.push_back('6'); dq.pop_front(); dq.pop_front(); }
                else if (c == 'e')
                {
                    str.push_back('7');
                    dq.pop_front();
                    dq.pop_front();
                    dq.pop_front();
                    dq.pop_front();
                }
            }
        }
    }
    answer = stoi(str);
    return answer;
}