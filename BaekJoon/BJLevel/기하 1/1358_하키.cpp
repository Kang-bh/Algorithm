#include <iostream>
#include <vector>
using namespace std;


int W, H, X, Y, P;

bool Range(int x, int y) {
	int radius = H / 2;

	int distance1 = (x - X) * (x - X) + (y - radius - Y)* (y - radius - Y);
	int distance2 = (x - W - X) * (x - W - X) + (y - radius - Y) * (y - radius - Y);

	if (X <= x && x <= X + W && Y <= y && y <= Y + H)
		return true;
	else if (distance1 <= radius * radius)
		return true;
	else if (distance2 <= radius * radius)
		return true;
	return false;

}

int main() {

	cin >> W >> H >> X >> Y >> P;

	int cnt = 0;

	for (int i = 0; i < P; i++) {
		int x, y;
		cin >> x >> y;
		
		if (Range(x, y))
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}