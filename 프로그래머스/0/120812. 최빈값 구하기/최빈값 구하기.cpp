#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> v (1002,0);
    bool e = false;
    int temp = 0;
    for(int i = 0;i<array.size();i++)
    {
        v[array[i]]++;
    }
    for(int i =0;i<v.size();i++)
    {
        if(v[i]>temp)
        {
            answer = i;
            temp = v[i];
            e=false;
        }
        else if (v[i]==temp)
        {
            answer = -1;
            e=true;
        }
    }
    if(e)
        answer = -1;
    return answer;
}