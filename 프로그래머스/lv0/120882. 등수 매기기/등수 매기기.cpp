#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<pair<double,int>> average;
    for(int i = 0;i<score.size();i++)
    {
        double ave = (score[i][0]+score[i][1])/2.0;
        average.push_back(pair(ave,i));
        answer.push_back(0);
    }
    sort(average.rbegin(),average.rend());
    double temp = -1;
    int rank = -1;
    for(int i = 0;i<average.size();i++)
    {
        int j = average[i].second;
        if(temp == average[i].first)
            answer[j] = rank;
        else
        {
            answer[j]=i+1;
            rank = i+1;
        }
        temp = average[i].first;
        
    }
    return answer;
}