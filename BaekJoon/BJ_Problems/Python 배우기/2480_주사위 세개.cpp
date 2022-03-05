#include <iostream>
using namespace std;

int main(){

	int A, B, C;
	cin >> A >> B >> C;

	if (A == B && B == C && C == A) {
		cout << 10000 + A * 1000 << endl;
	}
	else if (A != B && B != C && C != A) {
		cout << 100 * max(max(A, B), C) << endl;
	}
	else {
		if (B == C)
			cout << 1000 + B * 100 << endl;
		else if (A == B)
			cout << 1000 + A * 100 << endl;
		else
			cout << 1000 + C * 100 << endl;
			
	}

	return 0;
}