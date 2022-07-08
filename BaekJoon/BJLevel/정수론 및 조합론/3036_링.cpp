#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> diagrams;

void Input() {
	
	cin >> N;

	int dia;
	for (int i = 0; i < N; i++) {
		cin >> dia;
		diagrams.push_back(dia);
	}
}

int gcd(int a, int b) {
	int n;

	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {

	Input();

	int std = diagrams.front();

	for(auto iter = diagrams.begin() + 1; iter != diagrams.end(); iter++){
		int LCM = lcm(std, *iter);
		cout << LCM / (*iter) << "/" << LCM / std << "\n";
	}

	return 0;
}