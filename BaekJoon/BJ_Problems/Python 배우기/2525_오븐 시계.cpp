#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int A, B, C; // �� �� �ð�

	cin >> A >> B;
	cin >> C;

	B += C;

	A += B/60;
	B %= 60;

	if (A > 23)
		A -= 24;

	cout << A << " " << B << endl;


	return 0;
}