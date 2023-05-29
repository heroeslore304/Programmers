#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int size1 = bin1.size();
    int size2 = bin2.size();
    int de1 = 0;
    int de2 = 0;
    for(int i =0; i<size1;i++)
    {
        if(bin1[i]=='1')
        {
            int p = size1-(i+1);
            de1 +=pow(2,p);
        }
    }
        for(int i =0; i<size2;i++)
    {
        if(bin2[i]=='1')
        {
            int p = size2-(i+1);
            de2 +=pow(2,p);
        }
    }
    int sum = de1+de2;
    if (sum == 0)
        answer = "0";
    while(sum>0)
    {
        int temp = sum%2;
        sum = sum/2;
        char c = temp+'0';
        string s = "";
        s.push_back(c);
        answer = s+answer;
    }
    return answer;
}