#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long x=sqrt(n);
    if(x*x==n)
        answer=pow(x+1,2);
    else
        answer=-1;
    return answer;
}