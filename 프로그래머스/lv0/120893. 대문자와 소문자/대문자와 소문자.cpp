#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0;i<my_string.size();i++)
    {
        char temp;
        if(my_string[i]>='a'&&my_string[i]<='z')
            temp = toupper(my_string[i]);
        else if(my_string[i]>='A'&&my_string[i]<='Z')
            temp = tolower(my_string[i]);
        answer.push_back(temp);
    }
    
    return answer;
}