#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i=0;i<phone_number.size();i++){
        if(i+4<phone_number.size()){
            phone_number[i]='*';
        }
    }
    answer=phone_number;
    return answer;
}