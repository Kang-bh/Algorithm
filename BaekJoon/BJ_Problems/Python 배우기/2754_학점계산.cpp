#include <iostream>
using namespace std;

int main(){
	char grade[3]; //'\0'
	double result;

	cin >> grade;
	cout << fixed;
	cout.precision(1);

	switch (grade[0]) {
	case 'A':
		result = 4;
		break;
	case 'B':
		result = 3;
		break;
	case 'C':
		result = 2;
		break;
	case 'D':
		result = 1;
		break;
	default:
		result = 0;
		break;
	}

	switch (grade[1])
	{
	case '+':
		result += 0.3;
		break;
	case '-':
		result -= 0.3;
		break;
	default:
		break;
	}

	cout << result << endl;


	return 0;
}