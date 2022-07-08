#include <iostream>
using namespace std;


int Data[1000][500] = { 0, }; // N K

int N, K;
void Input() {
	cin >> N >> K;
}

long long Combination(int n, int k) {

	
	if (n == k || k == 0) {
		Data[n][k] = 1;
		return 1;
	}
	else if (k == 1) {
		Data[n][k] = n;
		return n;
	}
	else {
		if (Data[n][k] == 0) {
			Data[n][k] = (Combination(n - 1, k) + Combination(n - 1, k - 1)) % 10007;
			
		}
		return Data[n][k];
	}

}

int main() {


	Input();

	cout << Combination(N, K) << "\n";


	return 0;
}