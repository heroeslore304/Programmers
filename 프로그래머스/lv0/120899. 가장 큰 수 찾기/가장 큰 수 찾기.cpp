#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    int m = -1;
    int c = 0;
    vector<int> answer;
    for(int i = 0;i<array.size();i++)
    {
        if(array[i]>m)
        {
            m = array[i];
            c = i;
        }
    }
    answer.push_back(m);
    answer.push_back(c);
    return answer;
}