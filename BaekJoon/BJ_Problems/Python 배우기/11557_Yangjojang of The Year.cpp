#include <iostream>
#include <string>
using namespace std;

int main(){
	int T, N, L;
	string S;
	cin >> T;

	int max_L;
	string result_sch;
	

	while (T != 0) {

		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> S >> L;
			if (i == 0) {
				result_sch = S; max_L = L;
				continue;
			}

			if (L > max_L)
				result_sch = S; max_L = L;

		}

		cout << result_sch << endl;

		T--;
	}


	return 0;
}