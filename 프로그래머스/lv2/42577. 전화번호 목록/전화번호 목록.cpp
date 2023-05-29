#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    vector<string> s = phone_book;
    unordered_map<string,int> m;

    for (auto a : phone_book)
        m.insert(pair<string,int>(a, 1));

    for (int i = 0; i < s.size(); i++)
    {
        string number = "";
        for (int j = 0; j < s[i].size(); j++)
        {
            number = number + s[i][j];
            if (m[number] && number != s[i])
            {
                answer = false;
                return false;
            }
        }
    }

    return answer;
}