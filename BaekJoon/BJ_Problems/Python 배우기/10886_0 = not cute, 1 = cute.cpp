#include <iostream>
using namespace std;

int main(){
	int T, count_zero = 0, count_one = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int che;
		cin >> che;
		if (che == 1)
			count_one++;
		else
			count_zero++;
	}

	if (count_zero > count_one)
		cout << "Junhee is not cute!" << endl;
	else
		cout << "Junhee is cute!" << endl;



	return 0;
}