#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int cost = 0;
        
    vector<int> dd = d;
    sort(dd.begin(),dd.end());
    
    for(int i = 0; i < dd.size();i++)
    {
        cost = cost+dd[i];
        if(cost<= budget)
        {
            answer++;
        }
    }

    return answer;
}