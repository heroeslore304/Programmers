#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i = 0;i<quiz.size();i++)
    {
        int temp = 0;
        bool di = false;
        bool m = false;
        int cal = 1;
        bool z = false;
        bool x =false;
        bool y = false;
        int X = 0;
        int Y = 0;
        int Z = 0;
        for(int j = 0;j<quiz[i].size();j++)
        {
            if(isdigit(quiz[i][j]))
            {
                int n = quiz[i][j] -'0';
                if(di)
                    temp = temp*10+n;
                else
                    temp = n;
                di=true;
            }
            else
            {
                if(di)
                {
                    if(m)
                        temp = temp*-1;
                    if(!x)
                    {
                        X=temp; 
                        x=true;
                    }
                    else if(y)
                    {
                        Y=temp*cal;
                        y=false;
                    }
                }
                switch(quiz[i][j])
                {
                    case ' ':break;
                    case '-':
                        if(di)
                        {
                            cal = -1;
                            m=false;
                            di =false;
                            y=true;
                        }
                        else
                            m=true;break;
                    case '+': cal = 1;
                            m=false;
                            di =false;
                            y=true;break;
                    case '=':
                            m=false;
                            di =false;
                            y=true; break;
                }
            }
        }
        if(m)
            Z=temp*-1;
        else
            Z=temp;
        if(X+Y==Z)
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}