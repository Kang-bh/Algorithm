#include <iostream>
using namespace std;

int main(){

	int A, B;
	while (cin >> A >> B) {
		if (A == 0 && B == 0)
			break;
		else if (A > B) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;
}