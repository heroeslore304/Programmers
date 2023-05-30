#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string head = "";
    string tail = "";
    for(int i = 1;i<food.size();i++)
    {
        int temp = food[i]/2;
        for(int j = 0;j<temp;j++)
        {
            string f = to_string(i);
            head += f;
            tail = f+tail;
        }
    }
    answer = head+"0"+tail;
    return answer;
}