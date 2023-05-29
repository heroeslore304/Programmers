#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    unordered_set<int> win;
    int rank = 7;
    int zero_count = 0;

    for (int i = 0; i < win_nums.size(); i++)
        win.insert(win_nums[i]);

    for (int i = 0; i < lottos.size(); i++)
    {
        if (win.find(lottos[i]) != win.end())
            rank--;
        else if (lottos[i] == 0)
            zero_count++;
    }

    int heighest;
    if (rank - zero_count >= 6) heighest = 6;
    else heighest = rank - zero_count;

    answer.push_back(heighest);

    if (rank >= 6) rank = 6;

    answer.push_back(rank);

    return answer;
}