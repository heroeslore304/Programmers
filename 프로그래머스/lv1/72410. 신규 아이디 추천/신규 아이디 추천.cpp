#include <string>
#include <vector>
#include <deque>

using namespace std;

string solution(string new_id) {
    string answer = "";
    deque<char> dq;
    string str = new_id;

    while (!str.empty())
    {
        char c = tolower(str.back());
        dq.push_front(c);
        str.pop_back();
    }

    while(!dq.empty())
    {
        char c = dq.front();
        dq.pop_front();
        if (isalpha(c) || c == '-' || c == '_' || c == '.' || isdigit(c))
            str.push_back(c);
    }

    while (!str.empty())
    {
        char c = str.back();
        str.pop_back();
        if (!dq.empty()&&dq.front() == '.')
            if (c == '.')
                continue;
        dq.push_front(c);
    }

    if (!dq.empty() && dq.front() == '.')
        dq.pop_front();
    if (!dq.empty() && dq.back() == '.')
        dq.pop_back();
    if (dq.empty())
        str = "a";

    while(str.size()<15 &&!dq.empty())
    {
        char c = dq.front();
        dq.pop_front();
        str.push_back(c);
    }

    if (str.back() == '.')
        str.pop_back();

    while (str.size() < 3)
    {
        char c = str.back();
        str.push_back(c);
    }
    answer = str;

    return answer;
}