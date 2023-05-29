#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    vector<int> temp_array = array;
    
    for (int i = 0; i < commands.size(); i++)
    {
        int begin = commands[i][0];
        int end = commands[i][1];
        vector<int>temp;
        for (int j = begin - 1; j < end; j++)
        {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        int an = temp[commands[i][2] - 1];
        answer.push_back(an);
    }

    return answer;
}