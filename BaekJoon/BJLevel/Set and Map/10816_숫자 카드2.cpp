#include <iostream>
#include <map>
using namespace std;

int N, M;
map<int, int> cards;

void Input() {
	cin >> N;
	int num;

	for (int i = 0; i < N; i++) {
		cin >> num;
		cards[num]++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	cin >> M;
	int num;
	for(int i = 0; i < M; i++){ 
		cin >> num;
		if (cards.find(num) != cards.end())
			cout << cards[num] << " ";
		else {
			cout << 0 << " ";
		}
	}
	cout << endl;

}