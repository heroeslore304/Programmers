#include <string>
#include <vector>
#include <bitset>
#include <string>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> m1;
    vector<string> m2;
    for(int i = 0; i < n ;i++)
    {
        bitset<20>bs1(arr1[i]); 
        bitset<20>bs2(arr2[i]);
        
        int k = 20 -n;
        
        string s1 = bs1.to_string();
        string s2 = bs2.to_string();
        
        s1 = s1.substr(k);
        s2 = s2.substr(k);
        
        m1.push_back(s1);
        m2.push_back(s2);
    }
    for(int i = 0; i<n ; i++)
    {
        string s;
        for(int j = 0; j<n; j++)
        {
            
            if(m1[i][j] == '0' && m2[i][j] == '0')
            {
                s= s+" ";
            }
            else
            {
                s= s+ "#";
            }
        }
        answer.push_back(s);
    }
    return answer;
}