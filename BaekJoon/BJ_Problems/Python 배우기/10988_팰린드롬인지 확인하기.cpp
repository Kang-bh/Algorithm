#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char str[101], compare[101];
	cin >> str;
	bool check = true;

	for (int i = strlen(str) - 1; i >= 0; i--) {
		compare[strlen(str) - 1 - i] = str[i];
	}

	for (int i = 0; i < strlen(str); i++) {
		if (compare[i] != str[i]) {
			check = false;
			break;
		}
	}

	if (check)
		cout << 1 << endl;
	else
		cout << 0 << endl;

	return 0;
}