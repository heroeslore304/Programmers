#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0;
    int y = 0;
    int px = board[0]/2;
    int nx = -px;
    int py = board[1]/2;
    int ny = -py;
    for(int i = 0;i<keyinput.size();i++)
    {
        switch (keyinput[i][0])
        {
            case 'u': y++;break;
            case 'd':y--;break;
            case 'r':x++;break;
            case 'l':x--;break;
        }
        if(x>px)
            x=px;
        else if(x<nx)
            x=nx;
        if(y>py)
            y=py;
        if(y<ny)
            y=ny;
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}