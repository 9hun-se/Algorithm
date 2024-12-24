#include <iostream>
using namespace std;
int main() {
	int H, M, c = 0;
	cin >> H;
	cin >> M;
	if (0 <= H <= 23 && 0 <= M <= 59)
	{
		if (H == 0 && M < 45) {
			H = 23;
			c=M+60-45;
		}
		else if (H !=0 && M < 45) {
			H--;
			c = (M + 60) - 45;
		}
		else
			c = M - 45;
	}


		

	cout << H << " " << c;
	return 0;
}