#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    for(int i = 1;i<dots.size();i++)
    {
        double dx = dots[i][0]-dots[0][0];
        double dy = dots[i][1]-dots[0][1];
        double dxdy = 0;
        if(dx!=0)
            dxdy = dy/dx;
        double jx = 0;
        double jy = 0;
        double jxjy = 0;
        bool jj = false;
        for(int j = 1;j<dots.size();j++)
        {
            if(!jj&&j!=i)
            {
                jx = -dots[j][0];
                jy = -dots[j][1];
                jj=true;
            }
            else if (jj&&j!=i)
            {
                jx += dots[j][0];
                jy += dots[j][1];
            }
        }
        if(jx!=0)
        {jxjy = jy/jx;}
        if(jxjy == dxdy &&dx!=0&&jx!=0)
        {
            answer = 1;
        }
        else if (jx==dx&&dx==0)
        {
            answer = 1;
        }
    }
    return answer;
}