#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    bool right = true;
    int be = 0;
    int temp = numbers[numbers.size()-1];
    if(direction !="right")
    {
        right = false;
        be = numbers.size()-1;
        temp = numbers[0];
    }
    for(int i = 0; i<numbers.size();i++)
    {
        if(right)
        {
            int a = numbers[i];
            numbers[i] = temp;
            temp = a;
        }
        else
        {
            int a = numbers[be-i];
            numbers[be-i] = temp;
            temp = a;
        }
    }
    answer = numbers;
    return answer;
}