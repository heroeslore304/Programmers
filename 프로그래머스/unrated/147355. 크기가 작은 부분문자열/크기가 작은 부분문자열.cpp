#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = p.size();
    long long pi = stoll(p);
    vector<long long> ti;
    for(int i =0;i<t.size()-size+1;i++)
    {
        string str = t.substr(i,size);
        long long temp = stoll(str);
        ti.push_back(temp);
    }
    for(int i = 0;i<ti.size();i++)
    {
        if(ti[i]<=pi)
            answer++;
    }
    return answer;
}