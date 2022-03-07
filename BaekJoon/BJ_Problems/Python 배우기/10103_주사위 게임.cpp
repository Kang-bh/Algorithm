#include <iostream>
using namespace std;

int main(){
	int n;
	int score_a = 100, score_b = 100;
	int a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b)
			score_b -= a;
		else if (b > a)
			score_a -= b;
		else
			continue;
	}
	
	cout << score_a << "\n" << score_b << endl;

	return 0;
}