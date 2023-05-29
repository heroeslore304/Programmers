#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int width = 0;
    int hight= 0;
    for(int i = 0; i<sizes.size();i++)
    {
        if(sizes[i][0]<sizes[i][1])
        {
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if(width<sizes[i][0])
        {
            width = sizes[i][0];
        }
        if(hight < sizes[i][1])
        {
            hight = sizes[i][1];
        }
    }
    answer = width*hight;
    return answer;
}