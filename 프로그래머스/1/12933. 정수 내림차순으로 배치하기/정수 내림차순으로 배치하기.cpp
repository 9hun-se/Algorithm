#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> num;
    
    while(n) {
        num.push_back(n % 10);
        n /= 10;
    }
    sort(num.begin(),num.end(),greater<int>());
    for(int i=0;i<num.size();i++){
        answer*=10;
        answer+=num[i];
    }
    return answer;
}