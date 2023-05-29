#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a;
    int b;
    if(n>m)
    {
        a=n;
        b=m;
    }
    else
    {
        a = m;
        b = n;
    }
    int c = a%b;
    while(c!=0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    answer.push_back(b);
    a = n*m/b;
    answer.push_back(a);
    return answer;
}