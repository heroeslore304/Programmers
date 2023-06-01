#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> runners;
    map<int,string> rank;
    for(int i = 0;i<players.size();i++)
    {
        runners.insert({players[i],i});
        rank.insert({i,players[i]});
    }
    for(int i = 0;i<callings.size();i++)
    {
        auto higher = runners.find(callings[i]);
        auto higherR = rank.find(higher->second-1);
        auto lower = runners.find(higherR->second);
        auto lowerR = rank.find(higher->second);
        higher->second = higher->second-1;
        lower->second = lower->second+1;
        lowerR->second = higherR->second;
        higherR->second = callings[i];
    }
    for(int i = 0;i<players.size();i++)
    {
        auto ranker = rank.find(i);
        answer.push_back(ranker->second);
    }
    return answer;
}