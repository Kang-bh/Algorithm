#include <iostream>
using namespace std;

int main(){
	int N, count_A = 0, count_B = 0;
	cin >> N;

	char* str = new char[N + 1];
	cin >> str;

	for (int i = 0; i < N; i++) {
		if (str[i] == 'A')
			count_A++;
		else
			count_B++;
	}

	if (count_A > count_B)
		cout << 'A' << endl;
	else if (count_B > count_A)
		cout << 'B' << endl;
	else
		cout << "Tie" << endl;


	return 0;
}