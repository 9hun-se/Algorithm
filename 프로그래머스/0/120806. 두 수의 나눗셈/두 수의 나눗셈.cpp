#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    double answer = 0;
    cin>>num1>>num2;
    answer=double(num1)/double(num2)*1000;
    return answer;
}