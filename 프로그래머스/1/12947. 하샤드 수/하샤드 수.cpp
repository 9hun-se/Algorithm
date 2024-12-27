#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum=0;
    int a=x;
    while(x){
        sum+=x%10;
        x=x/10;
        
    }
    int b=a%sum;
    
        
    bool answer = true;
    if(b==0){
        answer=true;
    }
    else
        answer=false;
    
    return answer;
}