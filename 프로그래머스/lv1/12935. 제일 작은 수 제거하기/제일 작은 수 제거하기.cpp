#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> v = arr;
    sort(v.begin(),v.end());
    int k = v[0];
    for(int i = 0;i<arr.size();i++)
    {
        if(arr[i] != k)
        {
            answer.push_back(arr[i]);
        }
    }
    if(answer.size()==0)
    {
        answer.push_back(-1);
    }
    return answer;
}