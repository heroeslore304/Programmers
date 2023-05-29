#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<bool> line(202,false);
    for(int i = 0;i<lines.size();i++)
    {
        for(int j =i+1;j<lines.size();j++)
        {
            if(lines[i][0]<=lines[j][0]&&lines[i][1]>lines[j][0])
            {
                int temp = lines[i][1]<lines[j][1] ? lines[i][1]:lines[j][1];
                for(int n = lines[j][0]+100;n<=temp+100;n++)
                    line[n]=true;
            }
            else if(lines[i][0]>=lines[j][0]&&lines[j][1]>lines[i][0])
            {
                int temp = lines[i][1]<lines[j][1] ? lines[i][1]:lines[j][1];
                 for(int n = lines[i][0]+100;n<=temp+100;n++)
                    line[n]=true;
            }
        }
    }
    for(int i = 0;i<line.size();i++)
    {
        if(line[i]==true)
        {
            answer++;
        }
        else if(i-1>0 && line[i-1]==true && line[i]==false)
            answer--;
    }
    return answer;
}