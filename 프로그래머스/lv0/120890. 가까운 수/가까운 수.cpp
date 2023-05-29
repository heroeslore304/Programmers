#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int temp = array[0]-n;
    if(temp<0)
        temp = temp*-1;
    int iter = 0;
    for(int i = 0;i<array.size();i++)
    {
        int len = array[i]-n;
        if(len<0)
            len = len*-1;
        if(len<temp)
        {
            temp = len;
            iter =i;
        }
        else if (len==temp)
        {
            iter = array[iter]<array[i] ? iter: i;
        }
    }
    answer = array[iter];
    return answer;
}