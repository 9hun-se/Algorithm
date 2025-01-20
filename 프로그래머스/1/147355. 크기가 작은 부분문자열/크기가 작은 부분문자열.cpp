#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i=0;i<t.length()-p.length()+1;i++){
        string a = t.substr(i, p.length());
        long k = stol(a);
        long l = stol(p);
        
        if (k <= l) {
            answer += 1;
    }
    }
    return answer;
}