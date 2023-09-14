#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0;i<array.size();i++)
    {
        int m = array[i];
        while(m>0)
        {
            if(m%10==7)
                answer++;
            m = m/10;
        }
    }
    return answer;
}