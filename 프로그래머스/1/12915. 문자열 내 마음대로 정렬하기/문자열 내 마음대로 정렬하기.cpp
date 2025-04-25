#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int m;
bool compare (string a, string b) {
    if (a[m] != b[m]) 
    {
        return a[m] < b[m];
    }
    else 
    {
        return a < b;
    }
}
 
vector<string> solution(vector<string> strings, int n) {
    m = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}

