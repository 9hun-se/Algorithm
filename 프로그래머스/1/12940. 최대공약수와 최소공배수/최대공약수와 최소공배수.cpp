#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    for(int i=n;i>0;i--){
        if(n%i==0&&m%i==0){
            answer.push_back(i);
            break;
        }
    }
    for(int j=n;j<=n*m;j++){
        if(j%n==0&&j%m==0){
            answer.push_back(j);
            break;
        }
    }
    return answer;
}