#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> burger;
    for(int i = 0;i<ingredient.size();i++)
    {
        if(ingredient[i]==1)
        {
            if(burger.size()>0&&burger.top()==3)
            {
                burger.pop();
                answer++;
            }
            else
                burger.push(1);
        }
        else if(ingredient[i]==2)
        {
            if(burger.size()>0&&burger.top()==1)
            {
                burger.pop();
                burger.push(2);
            }
            else
                burger.push(0);
        }
        else if(ingredient[i]==3)
        {
            if(burger.size()>0&&burger.top()==2)
            {
                burger.pop();
                burger.push(3);
            }
            else
                burger.push(0);
        }
        
    }
    return answer;
}