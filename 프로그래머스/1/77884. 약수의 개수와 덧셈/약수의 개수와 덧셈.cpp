#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
   
    for(int i=left;i<right+1;i++){
        int sum=1;
        for(int j=2;j<right+1;j++){
            if(i%j==0)
                sum++;
        }
        if(sum%2==0)
            answer+=i;
        else
            answer-=i;
    }
    return answer;
}