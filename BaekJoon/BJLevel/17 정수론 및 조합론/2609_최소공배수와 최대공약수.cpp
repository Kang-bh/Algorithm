#include <iostream>
using namespace std;

int main() {
	
	int num1, num2;

	cin >> num1 >> num2;
	

	
	int least, greatest;

	// 최소 공배수
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			least = i;
			break;
		}
	}

	//최대 공약수
	greatest = least * (num1 / least) * (num2 / least);

	cout << least << "\n" << greatest << endl;




	return 0;
}