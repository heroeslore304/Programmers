#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    string duo = "";
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());
    int j=0;
    int i=0;
    while(j<Y.size()&&i<X.size())
    {
        if(X[i]==Y[j])
        {
            duo.push_back(X[i]);
            j++;
            i++;
            
        }
        else if(X[i]<Y[j])
        {i++;}
        else if(X[i]>Y[j])
        {j++;}
    }
    
    if(duo.size()==0)
        return "-1";
    string a = "";
    sort(duo.rbegin(),duo.rend());
    answer = duo;
    for(int i = 0;i<duo.size();i++)
    {
        if(duo[i]!='0')
            break;
        else if (i==duo.size()-1)
            answer = "0";
    }
    return answer;
}