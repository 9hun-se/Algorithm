#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a>b){
        for(int i=b;i<a+1;i++)
            answer+=i;
    }
    else if(a==b){
        answer=a;
    }
    else{
        for(int i=a;i<b+1;i++)
            answer+=i;
    }
    
    
    return answer;
}