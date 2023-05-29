#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int temp = -1;
    for(int i = 0; i <arr.size();i++)
    {
        if(arr[i] != temp)
        {
            temp = arr[i];
            answer.push_back(arr[i]);
        }
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;

    return answer;
}