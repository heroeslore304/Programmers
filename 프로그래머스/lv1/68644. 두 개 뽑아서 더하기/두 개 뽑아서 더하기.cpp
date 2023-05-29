#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> an;
    for(int i = 0;i<numbers.size();i++)
    {
        for(int j = 0;j<numbers.size();j++)
        {
            if(i == j )
            {
            }
            else
            {
                an.insert(numbers[i]+numbers[j]);
            }
        }
    }
    for(auto i  = an.begin(); i != an.end(); i++)
    {
        answer.push_back(*i);
    }
    //sort(answer.begin(),answer.end());
    
    return answer;
}