#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int t1 = 0;
    int t2 = 0;
    int g = -1;
    for(int i = 0;i<goal.size();i++)
    {
        if(t1<cards1.size()&&goal[i]==cards1[t1])
            t1++;
        else if(t2<cards2.size()&&goal[i]==cards2[t2])
            t2++;
        else
            break;
        g = i;
    }
    if(g==goal.size()-1)
        answer = "Yes";
    else
        answer  ="No";
    return answer;
}