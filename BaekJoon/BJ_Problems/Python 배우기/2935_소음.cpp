#include <iostream>
#include <string>
using namespace std;

int main(){
	string A, B, result;
	int size = 0;
	char oper;
	cin >> A >> oper >> B;

	
	if (oper == '*') {
		size = A.size() + B.size() - 2; // 0 °³¼ö
		result = '1';
		for (int i = 0; i < size; i++)
			result.push_back('0');
	}
	else {
		int check = 0;
		if (A.size() > B.size()) {
			size = A.size() - 1;
			check = B.size();
			result = '1';
		}
		else if (A.size() < B.size()){
			size = B.size() - 1;
			check = A.size();
			result = '1';
		}
		else {
			size = A.size() - 1;
			result = '2';
		}

		for (int i = size; i > 0; i--)
			if (i == check)
				result.push_back('1');
			else
				result.push_back('0');
	}
	

	cout << result << endl;

	return 0;
}