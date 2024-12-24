#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    
    cin >> A >> B;
    cout << fixed;
	cout.precision(9);
    cout << (double)A / (double)B;
    return 0;
}