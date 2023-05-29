#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int pick = nums.size()/2;
    sort(nums.begin(), nums.end());
    int answer = 0;

    int temp = nums[0];
    answer++;
    pick--;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > temp && pick>0)
        {
            temp = nums[i];
            answer++;
            pick--;
        }
        if (pick <= 0)
        {
            break;
        }
    }
    return answer;
}