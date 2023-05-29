#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> minebomb(vector<vector<int>> v, vector<int>dx,vector<int>dy,int x,int y)
{
    vector<vector<int>> temp = v;
    for(int i = 0;i<dx.size();i++)
    {
        int a = x+dx[i];
        int b = y+dy[i];
        if(a>=0&&b>=0&&a<v.size()&&b<v[0].size())
        {
            if(temp[a][b]==0)
                temp[a][b] = -1;
        }
    }
    return temp;
}
int solution(vector<vector<int>> board) {
    int answer = 0;
    vector<int> dx = {-1,-1,-1,0,0,1,1,1};
    vector<int> dy = {0,1,-1,1,-1,1,-1,0};
    
    for(int i = 0;i<board.size();i++)
    {   
        for(int j = 0; j<board[i].size();j++)
            {
                if(board[i][j]==1)
                    board = minebomb(board,dx,dy,i,j);
            }
    }
    for(int i = 0;i<board.size();i++)
    {   
        for(int j = 0; j<board[i].size();j++)
            {
                if(board[i][j]==0)
                    answer++;
            }
    }
    return answer;
}