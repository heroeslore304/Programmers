#include <string>
#include <vector>

using namespace std;


int solution(string dartResult) {
    int answer = 0;
    vector<int> nums;
    int n = 0;
    string score;
    
    for(int i = 0; i<dartResult.size();i++)
    {
        switch(dartResult[i])
        {
            case 'S': n = stoi(score); nums.push_back(n); score.clear(); break;
            case 'D': n = stoi(score); nums.push_back(n*n); score.clear(); break;
            case 'T': n = stoi(score); nums.push_back(n*n*n); score.clear(); break;
            case '*':
                if(nums.size()>1)
                {
                    nums[nums.size()-1]  = nums[nums.size()-1]*2;
                    nums[nums.size()-2]  = nums[nums.size()-2]*2;
                }
                else
                {
                    nums[nums.size()-1]  = nums[nums.size()-1]*2;
                }
                break;
            case '#':
                nums[nums.size()-1]  = -nums[nums.size()-1];
                break;
            default: score = score+dartResult[i]; break;
        }
    }
    
    answer = nums[0]+nums[1]+nums[2];
    
    return answer;
}