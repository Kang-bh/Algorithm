#include <iostream>
using namespace std;

int main(){
	int T, A, B, C, result;
	result = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B >> C;
		if (A != B && B != C && C != A)
			result = (result < 100 * max(A, max(B, C))) ? 100 * max(A, max(B, C)) : result;
		else if (A == B && B == C && C == A)
			result = (result < (10000 + A * 1000)) ? 10000 + A * 1000 : result;
		else {
			if (A == B)
				result = (result < (1000 + A * 100)) ? (1000 + A * 100) : result;
			else if (B == C)
				result = (result < (1000 + B * 100)) ? (1000 + B * 100) : result;
			else
				result = (result < (1000 + C * 100)) ? (1000 + C * 100) : result;
		}
	}

	cout << result << endl;

	return 0;
}