#include <iostream>
using namespace std;

int main(){
	int M, W; //Man Woman

	while (cin >> M >> W) {
		if (M == 0 && W == 0)
			break;
		cout << M + W << endl;
	}

	return 0;
}