#include <iostream>
using namespace std;

int main() {
	
	int num1, num2;

	cin >> num1 >> num2;
	

	
	int least, greatest;

	// �ּ� �����
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			least = i;
			break;
		}
	}

	//�ִ� �����
	greatest = least * (num1 / least) * (num2 / least);

	cout << least << "\n" << greatest << endl;




	return 0;
}