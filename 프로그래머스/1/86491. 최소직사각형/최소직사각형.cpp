#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int x=0;
    int y=0;
    for(int i=0;i<sizes.size();i++){
        if(sizes[i][0]>sizes[i][1]){
            x=max(x,sizes[i][1]);
            y=max(y,sizes[i][0]);
            
        }
         else
        {
            y=max(y,sizes[i][1]);
            x=max(x,sizes[i][0]);
        }
    }
    answer=x*y;
    return answer;
}