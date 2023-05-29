#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<double,int> a,pair<double,int> b)
{
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> s;
    vector<double> stuck;
    vector<pair<double,int>> lose;
    for(int i = 0;i<N+1;i++)
    {
        stuck.push_back(0);
        s.push_back(0);
    }
    
    for(int i = 0;i<stages.size();i++)
    {
        for(int j = 0; j<stages[i];j++)
        {
            s[j]++;
            if(j==stages[i]-1)
            {
                stuck[j]++;
            }
        }
    }
    for(int i = 0;i<s.size()-1;i++)
    {
        if(s[i] != 0)
        {
            double l = stuck[i]/s[i];
            pair<double,int> p = {l,i+1};
            lose.push_back(p);
        }
        else
        {
            pair<double,int> p = {0,i+1};
            lose.push_back(p);
        }
    }
    sort(lose.rbegin(),lose.rend(),cmp);
    for(int i = 0;i<lose.size();i++)
    {
        answer.push_back(lose[i].second);
    }
    
    return answer;
}