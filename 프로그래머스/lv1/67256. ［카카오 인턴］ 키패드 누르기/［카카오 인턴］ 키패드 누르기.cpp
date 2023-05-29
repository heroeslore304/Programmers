#include <string>
#include <vector>
#include <deque>

using namespace std;
int pad_distance(int a, int b)
{
    int dis = 0;
    if ( a == 2)
    {
        switch (b)
        {
        case 1: dis = 1; break;
        case 2: dis = 0; break;
        case 3: dis = 1; break;
        case 4: dis = 2; break;
        case 5: dis = 1; break;
        case 6: dis = 2; break;
        case 7: dis = 3; break;
        case 8: dis = 2; break;
        case 9: dis = 3; break;
        case 0: dis = 3; break;
        case -1:dis = 4; break;
        }
    }
    if ( a == 5)
    {
        switch (b)
        {
        case 1: dis = 2; break;
        case 2: dis = 1; break;
        case 3: dis = 2; break;
        case 4: dis = 1; break;
        case 5: dis = 0; break;
        case 6: dis = 1; break;
        case 7: dis = 2; break;
        case 8: dis = 1; break;
        case 9: dis = 2; break;
        case 0: dis = 2; break;
        case -1:dis = 3; break;
        }
    }
    if (a == 8)
    {
        switch (b)
        {
        case 1: dis = 3; break;
        case 2: dis = 2; break;
        case 3: dis = 3; break;
        case 4: dis = 2; break;
        case 5: dis = 1; break;
        case 6: dis = 2; break;
        case 7: dis = 1; break;
        case 8: dis = 0; break;
        case 9: dis = 1; break;
        case 0: dis = 1; break;
        case -1:dis = 2; break;
        }
    }
    if ( a == 0)
    {
        switch (b)
        {
        case 1: dis = 4; break;
        case 2: dis = 3; break;
        case 3: dis = 4; break;
        case 4: dis = 3; break;
        case 5: dis = 2; break;
        case 6: dis = 3; break;
        case 7: dis = 2; break;
        case 8: dis = 1; break;
        case 9: dis = 2; break;
        case 0: dis = 0; break;
        case -1:dis = 1; break;
        }
    }
    return dis;
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    string s;
    int left = -1;
    int right = -1;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            left = numbers[i];
            answer.push_back('L');
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            right = numbers[i];
            answer.push_back('R');
        }
        else
        {
            if (hand == "right")
            {
                if (pad_distance(numbers[i], right) <= pad_distance(numbers[i], left))
                {
                    right = numbers[i];
                    answer.push_back('R');
                }
                else
                {
                    left = numbers[i];
                    answer.push_back('L');
                }
            }
            else if (hand == "left")
            {
                if (pad_distance(numbers[i], left) <= pad_distance(numbers[i], right))
                {
                    left = numbers[i];
                    answer.push_back('L');
                }
                else
                {
                    right = numbers[i];
                    answer.push_back('R');
                }
            }
        }
    }

    return answer;
}