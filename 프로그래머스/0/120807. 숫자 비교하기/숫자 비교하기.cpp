#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer;
    cin>>num1>>num2;
    if(num1==num2)
        answer=1;
    else
        answer=-1;
    return answer;
}