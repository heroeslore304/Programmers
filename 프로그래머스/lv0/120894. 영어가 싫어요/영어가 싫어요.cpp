#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> alphabet  {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string nums ="";
    for(int i = 0;i<numbers.size();i++)
    {
        switch(numbers[i])
        {
            case 'z':nums.push_back('0');i+=3;break;
            case 'o':nums.push_back('1');i+=2;break;
            case 't':
                if(numbers[i+1]=='w')
                {nums.push_back('2');i+=2;}
                else
                {nums.push_back('3');i+=4;}
                break;
            case 'f':
                if(numbers[i+1]=='o')
                {nums.push_back('4');i+=3;}
                else
                {nums.push_back('5');i+=3;}
                break;
            case 's':
                if(numbers[i+1]=='i')
                {nums.push_back('6');i+=2;}
                else
                {nums.push_back('7');i+=4;}
                break;
            case 'e':nums.push_back('8');i+=4;break;
            case 'n':nums.push_back('9');i+=3;break;
        }
    }
    answer = stoll(nums);
    return answer;
}