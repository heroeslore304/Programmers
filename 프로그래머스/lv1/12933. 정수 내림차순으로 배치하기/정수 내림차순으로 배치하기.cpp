#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long k = n;
    vector<int> v;
    while(k!=0)
    {
        int a = k%10;
        v.push_back(a);
        k = k/10;
    }
    sort(v.begin(),v.end(),greater<>());
    k = 0;
    for(int i = 0;i<v.size(); i++)
    {
        k = k*10+v[i];
    }
    answer =k;
    return answer;
}