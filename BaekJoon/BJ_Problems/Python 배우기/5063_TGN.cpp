#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int r, e, c;

		cin >> r >> e >> c;
		if (r < e - c)
			cout << "advertise" << endl;
		else if (r == e - c)
			cout << "does not matter" << endl;
		else
			cout << "do not advertise" << endl;
	}

	return 0;
}