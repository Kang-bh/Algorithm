#include <iostream>
using namespace std;

int main(){
	int T, Y, K;
	cin >> T;
	int score_Y, score_K;

	while (T != 0) {
		score_Y = 0; score_K = 0;
		for (int i = 0; i < 9; i++) {

			cin >> Y >> K;

			score_K += K;
			score_Y += Y;
		}

		if (score_K > score_Y)
			cout << "Korea" << endl;
		else if (score_Y > score_K)
			cout << "Yonsei" << endl;
		else
			cout << "Draw" << endl;
		T--;
	}



	return 0;
}