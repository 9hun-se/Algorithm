#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    cin>>n;
    
    int answer = 0;
    for(int i=1;i<n+1;i++)
        if(n%i==0)
            answer+=i;
    return answer;
}