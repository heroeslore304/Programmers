#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int n = choices.size();
    int rt=0;
    int cf=0;
    int jm=0;
    int an=0;
    for(int i=0;i<n;i++)
    {
        switch(survey[i][0])
        {
                case 'R': rt -= (choices[i]-4); break;
                case 'T': rt += (choices[i]-4); break;
                case 'C': cf -= (choices[i]-4); break;
                case 'F': cf += (choices[i]-4); break;
                case 'J': jm -= (choices[i]-4); break;
                case 'M': jm += (choices[i]-4); break;
                case 'A': an -= (choices[i]-4); break;
                case 'N': an += (choices[i]-4); break;
        }
    }
    if(rt<0)
        answer.push_back('T');
    else
        answer.push_back('R');
    if(cf<0)
        answer.push_back('F');
    else
        answer.push_back('C');
    if(jm<0)
        answer.push_back('M');
    else
        answer.push_back('J');
    if(an<0)
        answer.push_back('N');
    else
        answer.push_back('A');
    return answer;
}