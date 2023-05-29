#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int num3 = num2*num1;
    int denum3 = denum1*num2 + denum2*num1;

    int temp;
    int b = num3;
    int a = denum3;
    while(a != 0)
    {
        temp = b%a;
        b = a;
        a = temp;
    }
    num3= num3/b;
    denum3 = denum3/b;
    answer.push_back(denum3);
    answer.push_back(num3);
    return answer;
}
