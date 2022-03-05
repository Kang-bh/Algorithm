#include <iostream>
using namespace std;

int main(){

	int A, B, C, result;

	cin >> A >> B >> C;

	if (A * B <= C)
		result = 0;
	else
		result = A * B - C;

	cout << result << endl;

	return 0;
}