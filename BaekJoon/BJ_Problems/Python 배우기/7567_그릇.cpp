#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[51];
	char standard;
	int result = 10;

	cin >> str;
	standard = str[0];

	for (int i = 1; i < strlen(str); i++) {
		switch (standard) {
		case '(':
			if (str[i] == '(') {// °°À» ¶§
				result += 5;
				break;
			}
			else {
				result += 10;
				standard = ')';
				break;
			}
		case ')':
			if (str[i] == ')') {
				result += 5;
				break;
			}
			else {
				result += 10;
				standard = '(';
				break;
			}
		}
	}

	cout << result << endl;

	return 0;
}