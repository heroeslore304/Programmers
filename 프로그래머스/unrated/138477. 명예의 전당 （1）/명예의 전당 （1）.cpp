#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    int lowest = score[0];
    vector<int> rank;
    
    for(int i = 0;i<score.size();i++)
    {
        if(i<k)
        {
            if(lowest>score[i])
                lowest = score[i];
            rank.push_back(score[i]);
            sort(rank.rbegin(),rank.rend());
        }
        else if (score[i]>lowest)
        {
            rank[k-1] = score[i];
            sort(rank.rbegin(),rank.rend());
            lowest = rank[k-1];
        }
        answer.push_back(lowest);
    }
    return answer;
}