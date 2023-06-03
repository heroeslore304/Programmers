#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int x1 = wallpaper[0].size();
    int x2 =0;
    int y1 = wallpaper.size();
    int y2 = 0;
    for(int i = 0;i<wallpaper.size();i++)
    {
        for(int j = 0;j<wallpaper[i].size();j++)
        {
            if(wallpaper[i][j]=='#')
            {
                if(i>y2)
                    y2 = i;
                if(i<y1)
                    y1 = i;
                if(j>x2)
                    x2 = j;
                if(j<x1)
                    x1 = j;
            }
        }
    }
    answer.push_back(y1);
    answer.push_back(x1);
    answer.push_back(y2+1);
    answer.push_back(x2+1);
    return answer;
}