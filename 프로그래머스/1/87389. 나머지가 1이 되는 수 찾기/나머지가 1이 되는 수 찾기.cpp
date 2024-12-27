#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    cin>>n;
    int answer=0;
    for (int i=2; i< n; i++){
        if(n%i==1) {
            
            answer+=i;
            break;
           
        }
    }

    return answer;
}