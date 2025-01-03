#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp=0;
    int k=0;
    if(arr.size()==1){
        arr={-1};
        }
    else
        arr.erase(min_element(arr.begin(), arr.end()));
    answer = arr;
    
    
    return answer;
}