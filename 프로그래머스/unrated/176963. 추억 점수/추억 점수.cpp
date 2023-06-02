#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string,int> peoples;
    for(int i = 0;i<name.size();i++)
    {
        peoples.insert({name[i],yearning[i]});
    }
    for(int i = 0;i<photo.size();i++)
    {
        int sum = 0;
        for(int j = 0;j<photo[i].size();j++)
        {
            auto iter = peoples.find(photo[i][j]);
            if(iter != peoples.end())
            {
                sum += iter->second;
            }
        }
        answer.push_back(sum);
    }
    return answer;
}