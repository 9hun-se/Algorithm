#include <string>
#include <vector>
#include <math.h>
#include<algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;
    while(n)
    {
        vec.push_back(n % 3);
        n /= 3;
    }
    reverse(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++)
        answer += pow(3, i) * vec[i];
    
    return answer;
}