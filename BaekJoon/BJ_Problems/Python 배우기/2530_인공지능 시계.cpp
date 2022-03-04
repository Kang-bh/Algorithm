#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int A, B, C; // 시 분 초
	int D; // 요리 시간

	cin >> A >> B >> C;
	cin >> D;

	C += D;
	// 초 -> 분
	B += (C / 60);
	C %= 60;

	// 분 -> 시
	A += B/60;
	B %= 60;

	if (A > 23)
		A %= 24;

	cout << A << " " << B << " " << C << endl;


	return 0;
}