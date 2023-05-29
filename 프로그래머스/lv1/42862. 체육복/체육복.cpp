#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) 
{
    vector<int> student;
    int answer = 0;
    for (int i = 0; i <n; i++)
    {
        student.push_back(1);
    }
    for (int i = 0; i < lost.size(); i++)
    {
        student[lost[i]-1] = student[lost[i]-1] - 1;
    }
    for (int i = 0; i < reserve.size(); i++)
    {
        student[reserve[i]-1] = student[reserve[i]-1] + 1;
    }
    for (int i = 0; i < student.size(); i++)
    {
        if (student[i] > 0)
        {
            answer++;
        }
        else if (student[i] == 0)
        {
            if (i == 0)
            {
                if (student[i + 1] > 1)
                {
                    student[i] = 1;
                    student[i + 1] = student[i + 1]-1;
                    answer++;
                }
            }
            else if (i == student.size() - 1)
            {
                if (student[i - 1] > 1)
                {
                    student[i] = 1;
                    student[i - 1] = student[i - 1]-1;
                    answer++;
                }
            }
            else
            {
                if (student[i - 1] > 1)
                {
                    student[i] = 1;
                    student[i - 1] = student[i - 1]- 1;
                    answer++;
                }
                else if (student[i + 1] > 1)
                {
                    student[i] = 1;
                    student[i + 1] = student[i + 1]- 1;
                    answer++;
                }

            }
        }
    }
    return answer;
}